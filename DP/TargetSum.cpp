// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    if (target > sum || target < (-sum)) return 0;
    int s1 = (sum + target) / 2;
    int s2 = s1 - target;
    if (s1 + s2 < sum) return 0;

    int dp[n + 1][s1 + 1];
    dp[0][0] = 1;
    for (int j = 1; j < s1 + 1; j++) {
        dp[0][j] = 0;
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < s1 + 1; j++) {
            if (nums[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][s1];
    }
   
};

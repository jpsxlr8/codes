#define ll long long
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        ll splits=0;
        ll left_sum=0;
        ll right_sum=0;
        for(int i=0;i<n;i++){
            right_sum+=nums[i]; // total sum of nums 
        }
        for(int i=0;i<n-1;i++){ // n-1 since last element can't be included
           left_sum+=nums[i];
           right_sum-=nums[i]; //sum of last n-1-i;
            if(left_sum>=right_sum) splits++;
        }
        return splits;
    }
};

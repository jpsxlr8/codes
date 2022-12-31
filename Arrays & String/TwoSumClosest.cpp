// Given an int array nums and an int target. Find two integers in nums such that the sum is closest to target.

vector<int> closestPair(vector<int>vec, int target) {
    int n = vec.size();
    int resLeft = 0;
    int resRight = n-1;
    int left = 0;
    int right = n-1;
    int diff = INT_MAX;
    
    sort(vec.begin(), vec.end());
    
    while(left < right) {
        int sum = vec[left] + vec[right];
        if(abs(sum - target) < diff) {
            diff = abs(sum - target);
            resLeft = left;
            resRight = right;
        }
        if(sum < target) {
            left++;
        } else if(sum >= target) {
            right--;
        }
    }
    
    return {vec[resLeft], vec[resRight]};
}

// TC: O(NlogN)
// SC: O(1)

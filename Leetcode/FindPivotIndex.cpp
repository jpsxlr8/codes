class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_total=accumulate(nums.begin(),nums.end(),0);
        int left_total=0;
        for(int i=0;i<nums.size();i++){
            right_total-=nums[i];
            if(left_total==right_total)
            {
                return i;
            }
            left_total+=nums[i];
            
        }
        return -1;
    }
};

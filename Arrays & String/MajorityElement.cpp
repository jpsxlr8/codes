// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than floor⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};
// TC: O(nlogn)
------------------------------------------------------
------------------------------------------------------

 class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority_ele=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
           if(count==0){
             count++;
             majority_ele=nums[i];
           }else if(majority_ele==nums[i])
           {
               count++;
           }
           else count--;
        }
        return majority_ele;
    }
};

// TC: O(N)

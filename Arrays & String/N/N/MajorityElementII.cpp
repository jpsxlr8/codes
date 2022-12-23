// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.




class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int count1=0,count2=0;
        int result1=INT_MAX,result2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==result1)count1++;
            else if(nums[i]==result2)count2++;
            else if(count1==0){result1=nums[i];count1++;}
            else if(count2==0){result2=nums[i];count2++;}
            else{count1--; count2--;}
        }
        count1=0,count2=0;
        for(int x:nums){
            if(x==result1) count1++;
            else if(x==result2) count2++;
        }
        if(count1>n/3) res.push_back(result1);
        if(count2>n/3) res.push_back(result2);

        return res;
    }

};

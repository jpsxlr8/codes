class Solution {
public:
    int reverseInteger(int n){
       string s=to_string(n);
       reverse(s.begin(),s.end());
       int num=stoi(s);
        return num;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            nums.push_back(reverseInteger(nums[i]));
        }
        set<int>st;
        for(auto x:nums){
            st.insert(x);
        }
        return st.size();
    }
};

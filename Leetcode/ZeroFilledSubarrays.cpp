class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res=0,cnt=0;
        for(int n:nums){
            if(n==0){
                cnt++;
                res+=cnt;
            }else{
                cnt=0; //reset the count to zero
            }
        }
        return res;
    }
};

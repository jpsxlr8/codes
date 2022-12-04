#define ll long long
class Solution {
public:
    
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0; // single element case when it'll be the answer
        
        // calculating prefix sum
        ll prefix[n];
        prefix[0]=nums[0];
        ll index=0;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        
        
        ll res=INT_MAX;
        for(int i=1;i<n;i++){
           ll diff=(abs((prefix[i-1]/i)-((prefix[n-1]-prefix[i-1])/(n-i))));
           if(diff<res){
               res=diff;
               index=i-1;
           }
        }
        
        //handling the edge case i.e last indexed element
        if(abs(prefix[n-1]/n)<res){
            res=abs(prefix[n-1]/n);
            index=n-1;
        }
        
        return index;
    }
};

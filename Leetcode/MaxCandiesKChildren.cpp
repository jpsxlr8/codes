class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
         long long sum=0;
         long long n=candies.size();
        
        for(int i=0;i<candies.size();i++){
            sum+=(long long)candies[i];
        }
        
        if(sum<k) return 0; // not pssible since total candies are less than number of children
        long long hi=sum/k;
        long long lo=1;
        long long res=1;
        
        while(lo<=hi){
            long long mid=(hi+lo)/2;
            long long cnt=0;
            for(int i=0;i<n;i++){
                cnt+=candies[i]/mid;
            }
            if(cnt>=k){
                lo=mid+1;
                res=max(res,mid);
                
            }else{
                hi=mid-1;
                
            }
            
            
        }
        return res;
    }
};

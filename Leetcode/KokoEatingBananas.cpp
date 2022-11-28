class Solution {
public:
     int findnumofhours(vector<int>&piles, int k){
        int numOfHours=0;
        for(int i=0;i<piles.size();i++){
            numOfHours+=(piles[i]%k==0) ? piles[i]/k : (piles[i]/k)+1;
        }
        return numOfHours; 
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=1e9+7;
        while(left<right){
            int k=(left+right)/2;
            int hrs=findnumofhours(piles,k);
            if(hrs>h){
                left=k+1;
            }else{
                right=k;
            }
        }
        return left;
    }
};

// Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.

class Solution{
public:
    bool SubsetSum(int arr[],int in,int sum_total,int N){
        bool dp[N+1][sum_total+1];
        for(int i=0;i<N+1;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=sum_total;i++){
            dp[0][i]=false;
        }
        for(int i=1;i<N+1;i++){
            for(int j=1;j<sum_total+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][sum_total];
    }
    int equalPartition(int N, int arr[])
    {
       int sum_total=0;
       for(int i=0;i<N;i++){
           sum_total+=arr[i];
       }
       if(sum_total%2!=0) return false; // odd sum can't be possible with equal sum subsets
       return SubsetSum(arr,0,sum_total/2,N);
    }
};

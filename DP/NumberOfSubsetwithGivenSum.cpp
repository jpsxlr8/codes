// Given an array arr[] of non-negative integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.


class Solution{
const int mod=1e9+7;
	public:
	int SubSum(int arr[],int n,int sum){
	    
	    int t[n+1][sum+1];
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<sum+1;j++){
	            if(i==0) t[i][j]=0;
	            if(j==0) t[i][j]=1;
	           
	        }
	    }
	    for(int i=1;i<n+1;i++){
	        for(int j=0;j<sum+1;j++){
	            if(arr[i-1]<=j){
	                t[i][j]=(t[i-1][j]%mod+t[i-1][j-arr[i-1]]%mod)%mod;
	            }else{
	                t[i][j]=t[i-1][j]%mod;
	            }
	        }
	    }
	    return t[n][sum];
	}
	int perfectSum(int arr[], int n, int sum)
	{
        return SubSum(arr,n,sum);
	}
	  
};

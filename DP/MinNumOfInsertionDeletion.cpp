// Given two strings str1 and str2. The task is to remove or insert the minimum number of characters from/in str1 so as to transform it into str2. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.




class Solution{
		
    int dp[1001][1001];
	public:
	int lcs(string str1,string str2,int n,int m){
	    if(n==0||m==0) return 0;
	    if(dp[n][m]!=-1) return dp[n][m];
	    
	    if(str1[n-1]==str2[m-1]) 
	    return dp[n][m]=1+lcs(str1,str2,n-1,m-1);
	    else
	    return dp[n][m]=max(lcs(str1,str2,n-1,m),lcs(str1,str2,n,m-1));
	    
	}
	int minOperations(string str1, string str2) 
	{ 
	   // insertion length(str1)-length(lcs)
	   // deletion length(str2)-length(lcs)
	   int n=str1.size();
	   int m=str2.size();
	   memset(dp,-1,sizeof(dp));
	   int lcs_len=lcs(str1,str2,n,m);
	   return n+m-2*lcs_len;
	    
	} 
};

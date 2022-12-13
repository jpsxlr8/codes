// Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.
// Note: X and Y can have both uppercase and lowercase letters.


static int dp[1001][1001];
class Solution
{
    private:
    int lcs(string s1,string s2,int x,int y){
        for(int i=0;i<x+1;i++){
            for(int j=0;j<y+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<x+1;i++){
            for(int j=1;j<y+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[x][y];
        
    }
    
    public:
    //Function to find length of shortest common supersequence of two strings.
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
       return m+n-lcs(X,Y,m,n);
    }
};

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n+1, vector<bool>(n+1, true));
        int maxs=0,maxlen=1;
        for(int l=1; l<n+1; l++){
            for(int i=0;i+l<=n;i++){
                int j=i+l;
                dp[i][j]=(s[i]==s[j-1] && dp[i+1][j-1]);
                if(dp[i][j]){
                    maxs = i;
                    maxlen = l;
                }
                
            }
        }
         return s.substr(maxs,maxlen);   
        
    }
};

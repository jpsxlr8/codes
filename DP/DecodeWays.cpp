class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        if(n==0||s[0]=='0') return 0;
        vector<int>dp(n+1,0);
        dp[0]=1;// for decoding an empty string 1 way is there
        dp[1]=1;// for decoding single number also 1 way is there
        for(int i=2;i<=n;i++){
            if(s[i-1]>='1' && s[i-1]<='9')
                dp[i]+=dp[i-1];
            if(s[i-2]=='1')
                dp[i]+=dp[i-2];
            else if(s[i-2]=='2' && (s[i-1]>='0' && s[i-1]<='6'))
                dp[i]+=dp[i-2];
        }
        return dp[n];
    }
};
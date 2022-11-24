   void solve(int i,int j,vector<vector<int>> &a,vector<string> &ans,int n,string move,vector<vector<int>> &vis){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        if(i+1<n && !vis[i+1][j] && a[i+1][j]==1){
            vis[i][j]=1;
            solve(i+1,j,a,ans,n,move+'D',vis);
            vis[i][j]=0;
        }
        if(j-1>=0 && !vis[i][j-1] && a[i][j-1]==1){
            vis[i][j]=1;
            solve(i,j-1,a,ans,n,move+'L',vis);
            vis[i][j]=0;
        }
        if(j+1<n && !vis[i][j+1] && a[i][j+1]==1){
            vis[i][j]=1;
            solve(i,j+1,a,ans,n,move+'R',vis);
            vis[i][j]=0;
        }
        if(i-1>=0 && !vis[i-1][j] && a[i-1][j]==1){
            vis[i][j]=1;
            solve(i-1,j,a,ans,n,move+'U',vis);
            vis[i][j]=0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(m[0][0]==1) solve(0,0,m,ans,n,"",vis);
        return ans;
    }

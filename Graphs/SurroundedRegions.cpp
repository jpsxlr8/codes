class Solution{
public:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&mat,int delrow[],int delcol[]){
        vis[r][c]=1;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<4;i++){
            int newr=r+delrow[i];
            int newc=c+delcol[i];
            if(newr>=0 && newc>=0 && newr<n && newc<m && mat[newr][newc]=='O' && !vis[newr][newc]){
                vis[newr][newc]=1;
                dfs(newr,newc,vis,mat,delrow,delcol);
                
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        int delrow[]={+1,0,-1,0};
        int delcol[]={0,+1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            if(!vis[0][j] && mat[0][j]=='O'){
                dfs(0,j,vis,mat,delrow,delcol);
            }
            if(!vis[n-1][j] && mat[n-1][j]=='O'){
                dfs(n-1,j,vis,mat,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0] && mat[i][0]=='O'){
                dfs(i,0,vis,mat,delrow,delcol);
            }
            if(!vis[i][m-1] && mat[i][m-1]=='O'){
                dfs(i,m-1,vis,mat,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O' && !vis[i][j]){
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

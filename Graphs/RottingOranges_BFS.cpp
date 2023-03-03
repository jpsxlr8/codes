class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        //declare 2-d vis array
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});// rotten oranges at t=0;
                    vis[i][j]=2;
                }else{
                    vis[i][j]=0;
                }
            }
        }
        int ans=0;
        int delrow[]={+1,0,-1,0};
        int delcol[]={0,+1,0,-1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            ans=max(ans,t);
            q.pop();
            // check all the neighbours in all 4-directions
            for(int i=0;i<4;i++){
                int nr=r+delrow[i];
                int nc=c+delcol[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]!=2){
                    q.push({{nr,nc},t+1});
                    vis[nr][nc]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return ans;
    }
};

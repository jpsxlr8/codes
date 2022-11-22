int shortestPath(vector<vector<int>> &grid, pair<int, int> src,pair<int, int> dest) {
        queue<pair<int,pair<int,int>>> q;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
        dist[src.first][src.second]=0;
        q.push({0,src});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty())
        {
            int d=q.front().first;
            int r=q.front().second.first;
            int c=q.front().second.second;
            if(r==dest.first && c==dest.second) return d;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+delrow[i];
                int nc=c+delcol[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]!=0 && 1+d<dist[nr][nc]){
                    dist[nr][nc]=1+d;
                    q.push({dist[nr][nc],{nr,nc}});
                }
            }
        }
        return -1;
 
    }
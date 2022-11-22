  vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int>dist(V,1e8);
        dist[S]=0;
        for(int i=0;i<V-1;i++){
            for(auto it:edges){
                int u=it[0];
                int v=it[1];
                int edgeW=it[2];
                if(dist[u]!=1e8 && dist[u]+edgeW<dist[v]){
                    dist[v]=dist[u]+edgeW;
                }
            }
        }
        //to check the negative cycle
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int edgeW=it[2];
            if(dist[u]!=1e8 && dist[u]+edgeW<dist[v]){
                    return {-1};
                }
        }
        return dist;
    }
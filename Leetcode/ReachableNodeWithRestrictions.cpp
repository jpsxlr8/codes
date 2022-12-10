class Solution {
public:
   
   void dfs(int u,int &cnt_nodes,vector<int>adj[],vector<bool>&vis){
       vis[u]=true;
       cnt_nodes++;
       for(auto v:adj[u]){
           if(!vis[v]){
               dfs(v,cnt_nodes,adj,vis);
           }
       }
   }

    
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<bool>vis(n,false);
        vector<int>adj[n];
        int cnt_nodes=0;
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(auto node:restricted){
          vis[node]=true;
        }
        dfs(0,cnt_nodes,adj,vis);
        return cnt_nodes;

    }
};

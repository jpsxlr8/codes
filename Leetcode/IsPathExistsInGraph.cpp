class Solution {
public:
     vector<int> graph[200001];
    
    void dfs(int start, vector<bool>&vis){
        vis[start]=true;
        for(auto neighbour:graph[start]){
            if(!vis[neighbour] && neighbour!=start){
                dfs(neighbour,vis);
            }
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
      for(int i=0;i<edges.size();i++){
          int u=edges[i][0];
          int v=edges[i][1];
          graph[u].push_back(v);
          graph[v].push_back(u);
      }
      vector<bool>vis(n,false);
      dfs(start,vis);
      return (vis[end]==true);
       
    }
};

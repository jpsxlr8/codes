// There is an undirected graph with n nodes, where each node is numbered between 0 and n - 1. You are given a 2D array graph, where graph[u] is an array of nodes that node u is adjacent to. More formally, for each v in graph[u], there is an undirected edge between node u and node v. The graph has the following properties:

// There are no self-edges (graph[u] does not contain u).
// There are no parallel edges (graph[u] does not contain duplicate values).
// If v is in graph[u], then u is in graph[v] (the graph is undirected).
// The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.
// A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

// Return true if and only if it is bipartite.







class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colors(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
          if(colors[i])continue;
          colors[i]=1;
          q.push(i);
          while(!q.empty()){
            int temp=q.front();
            
            
            for(auto neighbor:graph[temp]){
              if(!colors[neighbor]){
                 colors[neighbor]=-colors[temp];
                 q.push(neighbor); 
              }

              else if(colors[neighbor]==colors[temp]){
                  return false;
              }

            }

          q.pop();
          }

        }
       return true;
    }
};

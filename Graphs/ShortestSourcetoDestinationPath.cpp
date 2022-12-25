
class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        //djikstra's algorithmn
        if(A[0][0]==0){
            return -1;
        }
        
        vector<vector<int>>dist(N,vector<int>(M,1e9));
        dist[0][0]=0;
        
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{0,0}});
        
        while(!q.empty()){
            auto it=q.front();
            int wt=it.first;
            int x=it.second.first;
            int y=it.second.second;
            q.pop();
            
            if(x==X && y==Y){ // we've reached the destination
                return wt;
            }
            
            for(int i=0;i<4;i++){
                int newx=x+dx[i];
                int newy=y+dy[i];
                
               if(newx>=0 && newx<N && newy>=0 && newy<M && A[newx][newy]==1 && wt+1<dist[newx][newy]){
                   dist[newx][newy]=wt+1;
                   q.push({wt+1,{newx,newy}});
               } 
            }
        }
        return -1;
       
    }
};
    

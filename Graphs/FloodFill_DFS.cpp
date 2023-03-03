// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.



class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int delrow[],int delcol[],int iniColor,int color){
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
          int nrow=row+delrow[i];
          int ncol=col+delcol[i];
          if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=color){
              dfs(nrow,ncol,ans,image,delrow,delcol,iniColor,color);
          }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor=image[sr][sc];
        vector<vector<int>>ans=image;
        int delrow[]={+1,0,-1,0};
        int delcol[]={0,+1,0,-1};
        dfs(sr,sc,ans,image,delrow,delcol,iniColor,color);
        return ans;
    }
};

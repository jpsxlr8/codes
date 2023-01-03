#include <bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int h[]={-1,0,+1,0};
int v[]={0,-1,0,+1};
int n,m;

char c;
int cnt_rooms=0;
void dfs(int x,int y){
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        int dx=x+h[i],dy=y+v[i];
        if(dx>=0 && dx<n && dy>=0 && dy<m && !vis[dx][dy]){
            dfs(dx,dy);
        }
    }
    
}

int main() {

	cin >> n >> m;

	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin >> c;
	        if(c=='#'){
	            vis[i][j]=true;
	        }
	    }
	}
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        if(!vis[i][j]){
	            dfs(i,j);
	            cnt_rooms++;
	        }
	    }
	}
	cout << cnt_rooms << "\n";
	return 0;
}

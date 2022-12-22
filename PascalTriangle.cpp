//Pascal's triangle

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numRow;
    cin>>numRow;
    vector<vector<int>>res;
    for(auto i=0;i<numRow;i++){
            res.push_back(vector<int>(i+1,1));
            for(int j=1;j<i;j++) res[i][j]=res[i-1][j-1]+res[i-1][j];
            
    }
    for(int i=0;i<res.size();i++){
        for(int j=0;j<=i;j++){
            cout<<res[i][j];
        }
        cout<<"\n";
    }

    return 0;
}

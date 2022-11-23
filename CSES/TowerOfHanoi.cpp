#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void toh(vector<pair<int,int>>&vec,int n,int source,int dest,int aux){
    if(n==1){
        vec.push_back({source,dest});
        return;
    }
    toh(vec,n-1,source,aux,dest);
    vec.push_back({source,dest});
    toh(vec,n-1,aux,dest,source);
}
 
 
 
 
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    toh(v,n,1,3,2);
    cout<<v.size()<<endl;
    
    for(auto t:v){
        cout<<t.first<<" "<<t.second<<endl;
    }
    return 0;
}
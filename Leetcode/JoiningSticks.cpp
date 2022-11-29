#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;cin>>n;
    ll sticks[n];
    ll min_cost=0;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(int i=0;i<n;i++){
        cin>>sticks[i];
        pq.push(sticks[i]);
    }
 
    while(pq.size()>1){
        ll first=pq.top();
        pq.pop();
    
        ll second=pq.top();
        pq.pop();
        min_cost+=first+second;
        pq.push(first+second);
    }
    
    cout<<min_cost<<endl;
    return 0;
}

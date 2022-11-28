#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
   vector<ll>v;
   v.push_back(n);
    while(n>1){
        if(n%2==0){
            n/=2;
            v.push_back(n);
        }else{
            n=n*3+1;
            v.push_back(n);
        }
    }
    for(ll j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }

    return 0;
}

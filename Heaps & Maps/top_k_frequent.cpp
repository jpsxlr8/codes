#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;cin>>n>>k;
  unordered_map<int,int>mp;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  unordered_map<int,int>freq;
  for(int i=0;i<n;i++){
      freq[arr[i]]++;
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
  for(auto it:freq) pq.push({it.second,it.first});
        
   vector<int>res;
   while(k--){
      res.push_back(pq.top().second);
      pq.pop();
   }
        
    for(int i=0;i<res.size();i++){
       cout<<res[i]<<" ";
    }
    return 0;
}

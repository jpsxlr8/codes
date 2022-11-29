#include <bits/stdc++.h>
using namespace std;

 struct cmp{
 bool operator()(pair<int,int>p1,pair<int,int>p2)
 {
    if(p1.second==p2.second)
      return p1.first>p2.first;
    
  return p1.second<p2.second; // sort the remaining on decreasing order of frequecies
 }
};

int main()
{
    int N,K;
    cin >> N >> K;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<N;i++){
        mp[arr[i]]++;
    }
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq(mp.begin(), mp.end());
    
    for(int i=0;i<K;i++){
        cout << pq.top().first << " ";
        pq.pop();
    }
    
    cout << "\n";
    
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
       /* priority_queue<pair<int,int>>pq;
        for(auto it:freq) pq.push({it.second,it.first});*/
        
        vector<int>res;
     /*   vector<int>res1;*/
        /*while(k/2--){
            res1.push_back(pq.top().second);
            pq.pop();
        }*/
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
            
        }
        
       /* for(int i=0;i<res1.size();i++){
            cout<<res1[i]<<" ";
        }*/
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
    return 0;
}

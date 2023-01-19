#include<bits/stdc++.h>
using namespace std;
#define int long long

void countingSort(vector<int> &v)
{
    int mx = *max_element(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());
    int range = mx-mn+1;
    vector<int> cnt(range),a(v.size());
    for(int i : v)
        cnt[i-mn]++;
    for(int i = 1 ; i < range ; i++)
        cnt[i]+=cnt[i-1];
    for(int i = v.size()-1 ; i >= 0 ; i--)
    {
        a[--cnt[v[i]-mn]] = v[i];
    }
    for(int i = 0 ; i < v.size() ; i++)
        v[i] = a[i];
}
int32_t main()
{
    int n,i,k;
    cin>>n;
    vector<int> v(n);
    for(i = 0 ; i < n ; i++)
        cin>>v[i];
   countingSort(v);
    cout<<"After sorting using COUNTING SORT => ";
    for(auto i : v)
        cout<<i<<" ";
    return 0;
}

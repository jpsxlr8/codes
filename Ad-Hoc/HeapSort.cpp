#include<bits/stdc++.h>
using namespace std;
#define int long long

//A top-down mechanism : logN(as maximum no. of changes will be equal to the height)
void heapify(vector<int> &a , int root , int len) //len : 0...len unsorted hai, iss range ko sort karna hai
{
    int big = root;
    int l = 2*root + 1;
    int r = 2*root + 2;

    if(l<len && a[big]<a[l])
        big = l;
    if(r<len && a[big]<a[r])
        big = r;
    if(big!=root)
    {
        swap(a[big] , a[root]);
        heapify(a,big,len);
    }
}

void heapsort(vector<int> &a)
{
    int n = a.size();
    for(int i = n/2-1 ; i>=0 ; i--) //bottom up approach:- Build max-heap O(N*logN)
    {
        heapify(a,i,n); //logN
    }

    for(int i = n-1 ; i>=0 ; i--)
    {
        swap(a[i],a[0]);   //put the largest element in the end
        heapify(a,0,i);    //heapify the root till len
    }
}
int32_t main()
{
    int n,i,k;
    cin>>n;
    vector<int> v(n);
    for(i = 0 ; i < n ; i++)
        cin>>v[i];
    heapsort(v);
    cout<<"After sorting using HEAPSORT => ";
    for(auto i : v)
        cout<<i<<" ";
    return 0;
}

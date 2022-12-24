#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int max_so_far=nums[0];
    int res=nums[0];
    for(int i=1;i<n;i++){
        max_so_far=max(nums[i],max_so_far+nums[i]);
        res=max(res,max_so_far);
    }
   cout<<res<<"\n";
   return 0;
}

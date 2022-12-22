// Dutch National Flag 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int i=0,j=i,k=n-1;
        while(j<=k){
            if(nums[j]==0)swap(nums[i++],nums[j++]); // 0 between 0.....i index
            else if(nums[j]==1)j++; // 1 betweeen i and j index
            
            else swap(nums[k--],nums[j]); // 2 between j and n index
        }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

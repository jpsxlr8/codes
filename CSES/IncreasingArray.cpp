#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll n;
   cin >> n;
   ll a[n];
   ll moves = 0;
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   for(int i=1;i<n;i++){
       if(a[i]<a[i-1]){
           moves+=abs(a[i]-a[i-1]);
           a[i]=a[i-1];
           
       }
   }
   cout << moves <<endl;

    return 0;
}

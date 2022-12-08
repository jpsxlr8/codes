#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int total_zero=0;
 for(int i=5;n/i>=1;i*=5){
     total_zero+=n/i;
 }
 cout << total_zero << endl;
 return 0;
}

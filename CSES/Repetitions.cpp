#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int max_length=0,curr=1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            max_length=max(max_length,curr);
            curr=0;
        }
        curr++;
    }
    cout<<max(max_length,curr)<<"\n";

    return 0;
}

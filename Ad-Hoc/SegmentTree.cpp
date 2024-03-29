#include <bits/stdc++.h>
using namespace std;
int ar[100001],st[400004];

void build(int si, int ss, int se){
	if(ss==se){
		st[si]=ar[ss];
		return;
	}
	int mid=(ss+se)/2;
	build(2*si,ss,mid);
	build(2*si+1,mid+1,se);
	st[si]=min(st[2*si],st[2*si+1]);
}

int query(int si,int ss, int se, int qs, int qe){
	if(ss>qe || se<qs) return INT_MAX;
	if(ss>=qs && se<=qe) return st[si];
	int mid=(ss+se)/2;
	return min(query(2*si,ss,mid,qs,qe),query(2*si+1,mid+1,se,qs,qe));
	
}

int main() {
	
	int n,q,l,r;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> ar[i];
	}
    build(1,1,n);
    cin >> q;
    
    while(q--){
    	cin >> l >> r;
    	cout << query(1,1,n,l+1,r+1) << endl;
    }
	return 0;
}

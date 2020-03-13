#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k=0;
	cin>>n>>m;
	for(int i=(n+1)/2;i<=n;i++){
		if (i%m==0 && i!=0){
			k=i;
			cout<<i<<"\n";
			break;
		}
	}
	if(k==0) cout<<"-1\n";
	return 0;
}
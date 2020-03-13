#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k,ans;
	cin>>n>>m;
	vector<int> Diff(m);
	for (int i=0;i<m;i++){
		cin>>k;
		Diff[i]=k;
	}
	sort(Diff.begin(),Diff.end());
	ans=100000;
	for(int j=0;j<(m-n+1);j++){
		ans=min(ans, (Diff[j+n-1]-Diff[j]));
	}
	cout<<ans<<'\n';
	return 0;
}

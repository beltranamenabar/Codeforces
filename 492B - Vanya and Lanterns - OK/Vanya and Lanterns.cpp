#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,l;
	cin>>n>>l;
	vector<int> lights(n);
	for(int i=0;i<n;i++){
		cin>>lights[i];
	}
	sort(lights.begin(), lights.end());
	double ans=0;
	if(2*lights[0]>ans){
		ans=2*lights[0];
	}
	if(2*(l - lights[n-1])>ans){
		ans = 2*(l - lights[n-1]);
	}
	for(int i=0;i<n-1;i++){
		if(lights[i+1]-lights[i]>ans){
			ans=lights[i+1]-lights[i];
		}
	}
	cout<<fixed<<setprecision(10);
	cout<<ans/2<<'\n';
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> lines(n);
	for(int i=0;i<n; i++){
		cin>>lines[i];
	}
	sort(lines.begin(), lines.end());
	for(int i=n-1; i>1; i--){
		if((lines[i-2]+lines[i-1])>lines[i]){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
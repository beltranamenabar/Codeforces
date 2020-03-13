#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,j,k, mark=0;
	cin>>n;
	vector<pair<int,int> > Teams(n);
	for(int i=0;i<n;++i){
		cin>>j>>k;
		Teams[i].first=j;
		Teams[i].second=k;	
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else{
				if(Teams[i].first==Teams[j].second){
					mark=mark+1;
				}
			}

		}
	}
	cout<<mark<<'\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,n;
	cin>>a>>b>>n;
	vector<vector<int> > taxis(n, vector<int> (3));
	vector<int> distancia(n);
	vector<double> tiempo(n);
	for(int i=0; i<n; i++){
		cin>>taxis[i][0]>>taxis[i][1]>>taxis[i][2];
		distancia[i] = (taxis[i][0]-a)*(taxis[i][0]-a) + (taxis[i][1]-b)*(taxis[i][1]-b);
		tiempo[i] = sqrt(distancia[i])/taxis[i][2];
	}
	sort(tiempo.begin(), tiempo.end());
	cout<<fixed<<setprecision(9)<<tiempo[0]<<'\n';
	return 0;
}
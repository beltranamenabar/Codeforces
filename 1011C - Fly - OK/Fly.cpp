#include <bits/stdc++.h>
using namespace std;



bool canTravel(int &nPlanets, int &shipWeight,vector<int> &takeOff, vector<int> &landing, double fuel){
	double totalWeight = (double)shipWeight + fuel;
	double aux;
	int aux2;
	for(int i=0;i<nPlanets;i++){
		for(int j=0;j<2;j++){
			aux = (j)? totalWeight/landing[(i+j)%nPlanets] : totalWeight/takeOff[(i+j)%nPlanets];
			if((totalWeight = totalWeight - aux) < shipWeight) return false;
		}
	}
	return true;
}



int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin>>n>>m;
	vector<int> a(n), b(n);
	double left = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		left += (double)m/(double)a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		left += (double)m/(double)b[i];
	}
	double precision = 1e-6;
	double right = 1e9 + 1;
	double mid;
	while((left + precision)<right){
		mid = (right - left)/2 + left;
		if(canTravel(n,m,a,b,mid))
			right = mid;
		else
			left = mid;
	}
	if(mid > 1e9){
		cout<<"-1\n";
		return 0;
	}
	else{
		cout<<fixed<<setprecision(6)<<mid<<"\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k;
	cin>>n;
	vector<int> Cuerpo(3, 0);
	for(int l=0;l<n;l++){
		cin>>i>>j>>k;
		Cuerpo[0]+=i;
		Cuerpo[1]+=j;
		Cuerpo[2]+=k;
	}
	if(Cuerpo[0] || Cuerpo[1] || Cuerpo[2]){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
	}
	return 0;
	
}

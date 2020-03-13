#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int moves=0;
	cin>>n;
	vector<int> Soldiers(n);
	vector<int> Ordered(n);
	for(int i=0;i<n;i++){
		cin>>Soldiers[i];
		Ordered[i]=Soldiers[i];
	}
	sort(Ordered.begin(),Ordered.end());
	int Short = Ordered[0];
	int Tall = Ordered[n-1];
	for(int j=0;j<n;j++){
		if(Soldiers[j]==Tall){
			moves = j;
			break;
		}
	}
	for(int k=n-1;k>=0;k--){
		if(Soldiers[k]==Short){
			if(k<moves){
				moves = moves + (n-1)-(k+1);
			}
			else{
				moves = moves + (n - k) - 1;
			}
			break;
		}
	}
	cout<<moves;
	return 0;
}

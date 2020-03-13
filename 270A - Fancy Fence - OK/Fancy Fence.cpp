#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, angle;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>angle;
		if(360%(180-angle)==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}


	return 0;
}
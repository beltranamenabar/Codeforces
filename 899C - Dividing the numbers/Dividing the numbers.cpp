#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	string S;
	if(n==1){
		cout<<"1\n1 1\n";
		return 0;
	}
	if(n==2){
		cout<<"1\n1 2\n";
		return 0;
	}
	if(n%4==0){
		cout<<"0\n"<<2*(n/4) + 2<<" 1 4 ";

		for(int i=4; i+1<n+1; i=i*4){
			cout<<i+1<<" ";
		}
		for(int i=4; i+3<n+1; i=i*4){
			cout<<i+3<<" ";
		}
		cout<<"\n";
		return 0;
	}
	if(n%4==1){
		cout<<"1\n";
		cout<<2*(n/4) + 1<<" ";
		cout<<"2 ";
		for(int i=4; i+2<n+1; i*=4){
			cout<<i+2<<" ";
		}
		for(int i=4; i+1<n+1; i*=4){
			cout<<i+1<<" ";
		}
		cout<<"\n";
		return 0;
	}
	if(n%4==2){
		cout<<"1\n";
		cout<<2*(n/4) + 2<<" ";
		cout<<"2 3 ";
		for(int i=4; i+3<n+1; i*=4){
			cout<<i+3<<" ";
		}
		for(int i=4; i+2<n+1; i*=4){
			cout<<i+2<<" ";
		}
		cout<<"\n";
		return 0;
	}
	if(n%4==3){
		cout<<"0\n"<<2*(n/4) + 2<<" 1 2 ";
		for(int i=4; i+3<n+1; i=i*4){
			cout<<i+3<<" ";
		}
		for(int i=4; i<n+1; i=i*4){
			cout<<i<<" ";
		}
		cout<<"\n";
		return 0;
	}
	return 0;
}
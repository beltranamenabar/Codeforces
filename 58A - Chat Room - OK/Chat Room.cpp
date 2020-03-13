#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	int b;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='h'){
			b = i+1;
			break;
		}
	}
	if(b==0){
		cout<<"NO\n";
		return 0;
	}
	int c=b;
	for(int j=b; j<a.size();j++){
		if(a[j]=='e'){
			b = j+1;
			break;
		}
	}
	if(b==c){
		cout<<"NO\n";
		return 0;
	}
	int d=b;
	for(int k=b; k<a.size();k++){
		if(a[k]=='l'){
			b = k+1;
			break;
		}
	}
	if(b==d){
		cout<<"NO\n";
		return 0;
	}
	int e=b;
	for(int l=b; l<a.size();l++){
		if(a[l]=='l'){
			b = l+1;
			break;
		}
	}
	if(b==e){
		cout<<"NO\n";
		return 0;
	}
	int f=b;
	for(int m=b; m<a.size();m++){
		if(a[m]=='o'){
			b = m+1;
			break;
		}
	}
	if(b==f){
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	return 0;
}
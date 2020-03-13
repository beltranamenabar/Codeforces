#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	string b;
	int n1=0;
	int n2=0;
	int n3=0;
	cin>>a;
	for(int i=0;2*i<a.size();i++){
		if(a[2*i]=='1'){
			n1++;
		}
		else if(a[2*i]=='2'){
			n2++;
		}
		else{
			n3++;
		}
	}
	if(n1>0){
		for(int j=0;j<n1-1;j++){
			b=b + "1+";
		}
		b = b+"1";
	}
	if(n2>0){
		if(n1!=0){
			b=b + "+";
		}
		for(int k=0;k<n2-1;k++){
			b=b + "2+";
		}
		b = b+"2";
	}
	if(n3>0){
		if(n1!=0 || n2!=0){
			b = b+"+";
		}
		for(int p=0;p<n3-1;p++){
			b=b + "3+";
		}
		b=b+"3";
	}
	cout<<b<<'\n';
	return 0;
}
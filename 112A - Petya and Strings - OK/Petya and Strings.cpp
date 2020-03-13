#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string a;
	string b;
	int c=0;
	cin>>a;
	cin>>b;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			if(a[i]<b[i]){
				cout<<"-1\n";
				c = 1;
				break;
			}
			else if(a[i]>b[i]){
				cout<<"1\n";
				c = 1;
				break;
			}
		}
	}
	if(c==0){
		cout<<"0\n";
	}
	return 0;
}
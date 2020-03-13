#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string a;
	string b;
	cin>>a;
	transform(a.begin(),a.end(), a.begin(), ::tolower);
	for(int i=0; i<a.size(); i++){
		if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='y' && a[i]!='o' && a[i]!='u'){
			b = b + "." + a[i];
		}
	}
	cout<<b<<'\n';
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
	int a;
	cin>>a;
	vector<int> b(a);
	for(int i=0; i<a;i++){
		cin>>b[i];
	}
	sort(b.begin(), b.end());
	int c=0;
	int d=0;
	int sum=0;
	for(int i=0;i<a;i++){
		sum = sum + b[i];
	}
	for(int j=a-1;j>=0;j--){
		c = c + b[j];
		if(c> (sum/2)){
			d = a - j;
			cout<<d<<'\n';
			break;
		}
	}
	return 0;
}
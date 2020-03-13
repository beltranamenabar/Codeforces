#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a, b, ans;
	cin>>n>>m>>a>>b;
	double division = double(b)/double(m);
	if(a<division){
		ans=a*n;
	}
	else{
		ans=(n/m)*b;
		if(n%m!=0){
			if(b<=(n%m)*a){
				ans+=b;
			}
			else{
				ans+=(n%m)*a;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}

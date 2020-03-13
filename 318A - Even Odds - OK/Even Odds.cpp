#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,k,ans;
	cin>>n>>k;
	if(k<=ceil(double(n)/double(2))){
		ans=2*k-1;	
	}
	else{
		ans=2*(k-ceil(double(n)/double(2)));
	}
	cout<<ans<<'\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>=0){
		cout<<n<<'\n';
	}
	else{
		int fd=((n-(n%10))/10);
		int sd=(n-(n%100))/10 + (n%10);
		int ans=max(fd, sd);
		cout<<ans<<'\n';
	}
	return 0;
}

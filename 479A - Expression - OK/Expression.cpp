#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int MaX=0;
	MaX=max(MaX, a+b+c);
	MaX=max(MaX, a+b*c);
	MaX=max(MaX, (a+b)*c);
	MaX=max(MaX, a*b+c);
	MaX=max(MaX, a*(b+c));
	MaX=max(MaX, a*b*c);
	cout<<MaX<<'\n';
	return 0;
}

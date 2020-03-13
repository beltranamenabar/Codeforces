#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r, x1,y1, x2, y2, n;
	cin>>r>>x1>>y1>>x2>>y2;
	int x3 = x2-x1;
	int y3 = y2-y1;
	int dist = x3*x3 + y3*y3;
	double dist2 = sqrt(dist);
	n = (int)dist2 / (2*r);
	if(2*r*n != dist2){
		n++;
	}
	cout<<n<<'\n';
	return 0;
}
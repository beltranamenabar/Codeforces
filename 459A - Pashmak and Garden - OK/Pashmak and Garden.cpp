#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int x3,x4,y3,y4, d;
	if(x1==x2){
		d = abs(y2-y1);
		x3 = x1+d;
		x4 = x3;
		y3 = y1;
		y4 = y2;
	}
	else if(y2==y1){
		d = abs(x2-x1);
		y3 = y1+d;
		y4 = y3;
		x3 = x1;
		x4 = x2;
	}
	else if(abs(x2-x1) == abs(y2-y1)){
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	}
	else{
		cout<<-1<<"\n";
		return 0;
	}
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
	return 0;
}
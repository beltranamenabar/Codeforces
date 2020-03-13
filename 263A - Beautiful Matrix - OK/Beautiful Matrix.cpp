#include <bits/stdc++.h>
using namespace std;
int abs(int a){
	if (a<0){
		return -a;
	}
	else{
		return a;
	}
}

int main(){
	int load, a, b;
	for(int i=0; i<5; i++){
		for(int j=0;j<5; j++){
			cin>>load;
			if(load==1){
				a=i;
				b=j;
			}
		}
	}	
	cout<<(abs(3-a-1)+abs(3-b-1))<<'\n';
	return 0;
}
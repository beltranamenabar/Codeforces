#include<bits/stdc++.h>
using namespace std;

int main(){
	string Dubstep,Original;
	cin>>Dubstep;
	int count=-1;
	for (int i=0;i<Dubstep.size();i++){
		if(count==0){
			if(Dubstep[i]=='W'){
				if(Dubstep[(i+1)]=='U'){
					if(Dubstep[(i+2)]=='B'){
						count=2;
						if(Original[Original.size()-1]!=' '){
							Original.push_back(' ');
						}
						continue;
					}
					else{
						Original.push_back(Dubstep[i]);
					}
				}
				else{
					Original.push_back(Dubstep[i]);
				}
			}
			else{
				Original.push_back(Dubstep[i]);
			}
		}
		else if(count==-1){
			count=0;
			for (int j=0;j>=0;j++){
				if(Dubstep[i+3*j]=='W'){
					if(Dubstep[i+3*j+1]=='U'){
						if(Dubstep[i+3*j+2]=='B'){
							if(count>0){
								count=count+3;
							}
							else{
								count=count+2;
							}
							continue;
						}
						else{
							if(count!=0){
								break;
							}
							else{
								Original.push_back(Dubstep[i]);
								break;
							}
						}
					}
					else{
						if(count!=0){
							break;
						}
						else{
							Original.push_back(Dubstep[i]);
							break;
						}
					}
				}
				else{
					if(count!=0){
						break;
					}
					else{
						Original.push_back(Dubstep[i]);
						break;
					}
				}
			}
			continue;
			
		}
		else{
			count--;
			continue;
		}
	}
	cout<<Original<<'\n';
	return 0;
}

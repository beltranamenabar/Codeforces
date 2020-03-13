#include <iostream>
#include <string>
using namespace std;

int main(){
	int count;
	string word;
	cin>>count;
	for(int i=1;i<count + 1;i++){
		cin>>word;
		if(word.size()>10){
			cout<<word[0]<<word.size()-2<<word[word.size()-1]<<'\n';
		}
		else{
			cout<<word<<'\n';
		}
	}
	return 0;
}
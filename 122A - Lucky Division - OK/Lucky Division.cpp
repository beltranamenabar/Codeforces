#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> luckyNumbers = {4, 7, 47, 74, 447, 474, 477, 747, 774};
	int almostLucky;
	cin>>almostLucky;
	for(int i=0; i<luckyNumbers.size();i++){
		if(almostLucky%luckyNumbers[i]==0){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
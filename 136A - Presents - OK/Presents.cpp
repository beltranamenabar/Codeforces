#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a;
  cin>>a;
  vector<int> b(a);
  for(int i=0;i<a;i++){
    cin>>b[i];
  }
  vector<int> c(a);
  for(int j=0;j<a;j++){
    c[b[j]-1]=j+1;
  }
  for(int k=0;k<a;k++){
  	cout<<c[k]<<" ";
  }
  cout<<'\n';
  return 0;
}
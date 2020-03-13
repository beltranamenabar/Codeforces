#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, q, k;
    cin>>n;
    vector<bool> levels(n, false);
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>k;
        if(!levels[k-1]){
            levels[k-1]=true;
        }
        continue;
    }
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>k;
        if(!levels[k-1]){
            levels[k-1]=true;
        }
        continue;
    }
    for(int i=0; i<n; i++){
        if(levels[i]==false){
            cout<<"Oh, my keyboard!\n";
            return 0;
        }
    }
    cout<<"I become the guy.\n";
    return 0;
}

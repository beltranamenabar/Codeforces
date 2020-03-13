#include <bits/stdc++.h>
using namespace std;

int main(){
    char letter;
    vector<bool> Used(26,false);
    int letter2, count=0;
    while(cin>>letter, letter!='}'){
        if(letter==',' || letter=='{'){
            continue;
        }
        letter2=letter - 'a';
        if(Used[letter2]==false){
            count++;
            Used[letter2]=true;
            continue;
         }
    }
    cout<<count<<'\n';
    return 0;
}

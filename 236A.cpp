#include <bits/stdc++.h>
using namespace std;

int main(){
    string userName;
    cin>>userName;
    set<char> checked;
    int count = 0;
    for(char c : userName){
        if(checked.find(c) != checked.end()){
            continue;
        }
        count++;
        checked.insert(c);
    }
    if(count%2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

}

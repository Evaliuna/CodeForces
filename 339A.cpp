#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string digits;
    for(char c: s) if(isdigit(c)) digits.push_back(c);
    
    sort(digits.begin(), digits.end());
    
    int j =0;
    for(char &c : s){
        if(isdigit(c)) c = digits[j++];
    }
    
    cout<<s<<"\n";
    
    return 0;
}

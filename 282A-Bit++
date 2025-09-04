#include <iostream>
using namespace std;

int main() {
   int n;
    cin>>n;
    string s[n];
    int x = 0;
    for(int i = 0; i<n;i++){
        cin>>s[i];
        if(s[i].front() == '+') ++x;
        else if(toupper(s[i].front()) =='X' && s[i].back() == '+' ) x++;
        else if(toupper(s[i].front()) =='X' && s[i].back() == '-' ) x--;
        else --x;
    }
    
    cout<<x<<"\n";
    return 0;
}

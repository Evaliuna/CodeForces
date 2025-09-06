#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;
   
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
      cout<<(s1==s2? 0: (lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())?-1:1))<<endl;

    return 0;
}

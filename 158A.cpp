#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
   
   for(int &x : a) cin>>x;
   
   int count = count_if(a.begin(), a.end(), [&](int x){ 
       return x>0 && x>= a[k-1];
   });
    cout  <<count<< "\n";
    return 0;
}

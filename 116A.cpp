#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i = 1; i<=n;i++) cin>>a[i]>>b[i];
    int maxVal = INT_MIN;
    int numOfPassenger = 0;
    for(int i =1 ; i<=n;i++){
      numOfPassenger += b[i] - a[i];
      maxVal = max(maxVal, numOfPassenger);
    }
    cout<<maxVal<<"\n";
    
    return 0;
}

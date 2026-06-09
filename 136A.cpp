#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> giver(n+1);

    for(int i = 1; i<=n; i++){
        int p;
        cin>>p;
        giver[p] = i;
    }

    for(int i = 1; i<=n; i++){
        cout<<giver[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
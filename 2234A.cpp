#include <iostream>
using namespace std;



int main(){
    int t,n;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>n;
        int b[n];
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
            
         for(int i = 0; i<n-1; i++){
           int mod = max(b[i],b[i+1]) % min(b[i], b[i+1]);
           if(b[i+2]== mod){
            if(b[i+1]>=b[i]){
                cout<<b[i+1]<<" "<<b[i]<<"\n";
                break;
            }
            else{
                cout<<b[i]<<" "<<b[i+1]<<"\n";
                break;
            }
           }
           else{
            cout<<-1<<"\n";
            break;
           }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n, petya , vasya, tonya;
    cin>>n;

    int count = 0;
    for(int i = 0 ; i<n ; i++){

        cin>>petya>>vasya>>tonya;
        if(petya + vasya + tonya >= 2){
            count++;
        }     

    }
    cout<<count<<"\n";

    return 0;
}
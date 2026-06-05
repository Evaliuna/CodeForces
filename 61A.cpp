#include <iostream>
#include <string>
using namespace std;

int main(){
    string  fstNum, secNum;
    cin>>fstNum>>secNum;

    long long length = fstNum.size();
    string finalAns(length,' ');

    for(long long i = 0; i<length; i++){
       finalAns[i] = (fstNum[i] != secNum[i])? '1' : '0';
    }
    cout<<finalAns<<"\n";
    
    return 0;
}
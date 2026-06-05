#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,x = 0;
    cin >> n;

    string statement;

    for(int i = 0; i<n; i++){
        cin >> statement;
        transform(statement.begin(), statement.end(), statement.begin(), ::tolower);

        if(statement =="++x" || statement =="x++"){
            x++;
        }
        else if(statement =="--x" || statement =="x--"){
            x--;
        }
    }
    cout << x << endl;

return 0;
}
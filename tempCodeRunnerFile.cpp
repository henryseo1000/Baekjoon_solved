#include <iostream>
using namespace std;

int main(){
    int b, c;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    while(true){
        cin >> b >> c;
        if ((b == EOF) || (c == EOF)){
            break;
        }
        else {
            cout << b + c << "\n";
        }
    }
}
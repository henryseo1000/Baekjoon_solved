#include <iostream>
using namespace std;

int main(){
    int b, c;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    while(!(cin >> b >> c).eof()){
        cout << b + c << "\n";
    }
}
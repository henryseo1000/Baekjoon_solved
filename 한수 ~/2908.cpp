#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    a = a / 100 + a / 10 % 10 * 10 + a % 10 * 100;
    b = b / 100 + b / 10 % 10 * 10 + b % 10 * 100;

    if (a > b){
        cout << a << "\n";
    }
    else {
        cout << b << "\n";
    }
}
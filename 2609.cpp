#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, max;

    cin >> a >> b;

    max = b;

    if (a > b){
        max = a;
    }

    for(int i = max; i >= 1; i--){
        if ((a % i == 0) && (b % i == 0)){
            cout << i << "\n";
            max = i;
            break;
        }
    }

    cout << (a / max) * (b / max) * max << "\n";
}
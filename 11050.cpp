#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b;
    int num1, num2, num3;

    num1 = num2 = num3 = 1;

    cin >> a >> b;

    for(int i = 2; i <= a; i++){
        num1 = num1 * i;
    }

    for(int i = 2; i <= b; i++){
        num2 = num2 * i;
    }

    for(int i = 2; i <= a - b; i++){
        num3 = num3 * i;
    }

    cout << num1 / (num2 * num3) << "\n";
}
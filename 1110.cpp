#include <iostream>
using namespace std;

int main(){
    int a, b, c, total1, total2;
    total2 = 0;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    cin >> a;
    total1 = 0;
    int num = a;

    while (total1 != num){
        if ((total1 == 0) && (num != 0)){
            b = a / 10;
            c = a % 10;
            total1 = (c * 10) + ((b + c) % 10);
        }
        else{
            b = total1 / 10;
            c = total1 % 10;
            total1 = (c * 10) + ((b + c) % 10);
        }
        total2++;
    }
    if (num == 0){
        total2 = 1;
    }
    cout << total2 << "\n";
}
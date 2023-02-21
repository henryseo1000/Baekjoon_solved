#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int N, total, left;
    total = 0;

    cin >> N;
    left = N;

    if (N % 5 == 0){
        total = N / 5;
    }
    else if (N % 3 == 0){
        if (N / 3 >= 5){
            total = total + (N / 3 / 5 * 3) + (N / 3 % 5);
        }
        else {
            total = N / 3;
        }
    }
    else{
        while (left > 5){
            left = left - 5;
            total ++;
            if (left % 3 == 0){
                total = total + (left / 3 / 5 * 3) + (left / 3 % 5);
                left = 0;
                break;
            }
        }
        if (left != 0){
            total = -1;
        }
    }
    cout << total << "\n";
}

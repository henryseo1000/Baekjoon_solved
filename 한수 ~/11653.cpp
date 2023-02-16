#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num;
    cin >> num;

    while (num != 1){
        for(int i = 2; i <= num; i++){
            if (num % i == 0){
                cout << i << "\n";
                num = num / i;
                break;
            }
        }
    }
}
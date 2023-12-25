#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, count;
    int prime = 0; //prime이 0이면 소수
    count = 0;
    int num = 0;
    cin >> a >> b;

    for (int i = b; i >= a; i--){
        if (i == 1){
            prime++;
        }
        else if(i == 2){
            
        }
        else {
            for (int j = 2; j <= i / 2 + 1; j++){
                if (i % j == 0){
                    prime++;
                }
            }
        }
        if (prime == 0){
            count = count + i;
            num = i;
        }
        else {
            prime = 0;
        }
    }
    if (num == 0){
        cout << -1 << "\n";
    }
    else {
        cout << count << "\n" << num << "\n";
    }
}
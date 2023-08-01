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
    cin >> a;

    for (int i = 0; i < a; i++){
        cin >> b;
        if (b == 1){
            prime++;
        }
        else if(b == 2){
            
        }
        else {
            for (int j = 2; j <= b / 2 + 1; j++){
                if (b % j == 0){
                    prime++;
                }
            }
        }
        if (prime == 0){
            count ++;
        }
        else {
            prime = 0;
        }
    }
    cout << count << "\n";
}
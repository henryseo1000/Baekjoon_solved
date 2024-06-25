#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b;
    bool isPrime = true;

    int array[1000001] = {0};

    cin >> a >> b;

    for(int i = a; i <= b; i++){
        for(int j = 2; j <= i/2 + 1; j++){
            if (array[i] == 1){
                break;
            }
            else if(i % j == 0){
                array[i] = 1;
                isPrime = false;
                break;
            }
            else {
                continue;
            }
        }
        if(isPrime){
            printf("%d\n", i);
        }
        isPrime = true;
    }
}
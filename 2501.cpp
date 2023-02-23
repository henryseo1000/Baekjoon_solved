#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, count = 0, count1;
    int list[1000] = {};
    cin >> num >> count1;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            list[count] = i;
            count ++;
        }
    }

    if(count < count1){
        cout << 0 << "\n";
    }
    else {
        cout << list[count1 - 1] << "\n";
    }
}
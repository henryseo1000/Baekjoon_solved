#include <iostream>
#include <string.h>
using namespace std;

void self(){
    int total1 = 1;
    int total2;
    int number[10036] = {};
    while (true){
        total2 = total1 + (total1 / 10 / 10 / 10) + (total1 / 10 / 10 % 10) + (total1 / 10 % 10) + (total1 % 10);
        if(total2 >= 10035){
            break;
        }
        else{
            number[total2 - 1] = 1;
        }
        total1++;
    }
    for (int i = 0; i < 10000; i++){
        if (number[i] == 0){
            cout << i + 1 << "\n";
        }
        else{

        }
    }
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);
    self();
}
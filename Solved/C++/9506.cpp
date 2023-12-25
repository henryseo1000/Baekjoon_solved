#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, total = 0, count = 0;
    int list[1000] = {};
    
    while (1){
        cin >> num;
        if (num == -1){
            break;
        }
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                total += i;
                list[count] = i;
                count ++;
            }
        }
        if(total == num){
            cout << num << " = ";
            for(int i = 0; i < count; i++){
                if (i == count - 1){
                    cout << list[i] << "\n";
                }
                else {
                    cout << list[i] << " + ";
                }
            }
        }
        else {
            cout << num << " is NOT perfect." << "\n";
        }
        total = count = 0;
    }
}
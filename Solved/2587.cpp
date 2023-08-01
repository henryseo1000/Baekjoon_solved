#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, in, total;
    num = 0;
    int list[1001] = {};
    total = 0;

    for(int i = 0; i < 5; i++){
        cin >> in;
        list[i] = in;
        total += in;
    }

    list[5] = '\0';
    
    for(int i = 0; i < 5; i++){
        for(int j = i; j > 0; j--){
            if (list[j] < list[j - 1]){
                int temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
    }

    cout << total / 5 << "\n";
    cout << list[2] << "\n";
}
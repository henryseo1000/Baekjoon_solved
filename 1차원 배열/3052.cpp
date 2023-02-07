#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int count = 0;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int list[10] = {};
    for (int i = 0; i < 10; i++){
        cin >> list[i];
        list[i] = list[i] % 42;
    }
    for (int i = 0; i < 10; i++){
        for (int j = 9; j > i; j--){
            if(list[i] == list[j]){
                num++;
            }
        }
        if (num == 0){
            count++;
        }
        num = 0;
    }
    cout << count << "\n";
}
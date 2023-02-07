#include <iostream>
using namespace std;

int main(){
    int max, num;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int list[30] = {};
    for (int i = 0; i < 28; i++){
        cin >> num;
        list[num - 1] = 1;
    }
    for (int i = 0; i < 30; i++){
        if (list[i] == 0){
            cout << i + 1 << "\n";
        }
    }
}
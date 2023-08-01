#include <iostream>
using namespace std;

int main(){
    int max, count;
    count = 1;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int list[9];
    for (int i = 0; i < 9; i++){
        cin >> list[i];
    }
    max = list[0];
    for (int i = 0; i < 9; i++){
        if (list[i] > max){
            max = list[i];
            count = i + 1;
        }
    }
    cout << max << "\n" << count << "\n" ;
}
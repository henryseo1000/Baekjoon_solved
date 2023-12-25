#include <iostream>
using namespace std;

int main(){
    int a, max, min;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    cin >> a;
    int* list = new int[a];
    
    for (int i = 0; i < a; i++){
        cin >> list[i];
    }
    min = list[0];
    max = list[0];
    for (int i = 0; i < a; i++){
        if (list[i] < min){
            min = list[i];
        }
        if (list[i] > max){
            max = list[i];
        }
    }
    cout << min << " " << max << "\n";
}
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int* list = new int[a];
    
    for (int i = 0; i < a; i++){
        cin >> list[i];
    }
    for (int i = 0; i < a; i++){
        if (list[i] < b){
            cout << list[i] << " ";
        }
    }
}
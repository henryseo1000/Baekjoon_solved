#include <iostream>
using namespace std;

int main(){
    int a, b, count;
    count = 0;
    cin >> a;
    int* list = new int[a];
    
    for (int i = 0; i < a; i++){
        cin >> list[i];
    }
    cin >> b;
    for (int i = 0; i < a; i++){
        if (list[i] == b){
            count ++;
        }
    }
    cout << count << "\n";
}
#include <iostream>
using namespace std;

int main(){
    int a;
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    for (int i = 0; i < a; i++){
        for(int j = 0 ; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
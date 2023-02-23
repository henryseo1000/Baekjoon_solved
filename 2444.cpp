#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num;
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= i * 2 - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = num - 1; i >= 1; i--){
        for(int j = 1; j <= num - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= i * 2 - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
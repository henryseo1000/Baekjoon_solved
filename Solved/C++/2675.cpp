#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    char a[23];
    int num, repeat;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> repeat;
        cin >> a;
        for(int j = 0; j < strlen(a); j++){
            for(int k = 0; k < repeat; k++){
                cout << a[j];
            }
        }
        cout << "\n";
    }
}
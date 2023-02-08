#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    char a[105] = {};
    int count = 0;

    cin >> a;

    for(char i = 'a'; i <= 'z'; i++){
        for(int k = 0; k < strlen(a); k++){
            if((a[k] == i) && (count == 0)){
                count++;
                cout << k << " ";
            }
        }
        if(count == 0){
            cout << -1 << " ";
        }
        count = 0;
    }
}
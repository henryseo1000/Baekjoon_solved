#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    char word[5][15];

    for(int i = 0; i < 5; i++){
        cin >> word[i];
    }
    for(int i = 0; i < 15; i++){
        for(int k = 0; k < 5; k++){
            if (i < strlen(word[k])){
                cout << word[k][i];
            }
        }
    }
    cout << "\n";
}
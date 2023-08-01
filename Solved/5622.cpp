#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int total = 0;
    char arr[20] = {};
    cin >> arr;

    for (int i = 0; i < strlen(arr); i++){

        if((arr[i] == 'A') || (arr[i] == 'B') || (arr[i] == 'C')){
            total = total + 3;
        }
        else if((arr[i] == 'D') || (arr[i] == 'E') || (arr[i] == 'F')){
            total = total + 4;
        }
        else if((arr[i] == 'G') || (arr[i] == 'H') || (arr[i] == 'I')){
            total = total + 5;
        }
        else if((arr[i] == 'J') || (arr[i] == 'K') || (arr[i] == 'L')){
            total = total + 6;
        }
        else if((arr[i] == 'M') || (arr[i] == 'N') || (arr[i] == 'O')){
            total = total + 7;
        }
        else if((arr[i] == 'P') || (arr[i] == 'Q') || (arr[i] == 'R') || (arr[i] == 'S')){
            total = total + 8;
        }
        else if((arr[i] == 'T') || (arr[i] == 'U') || (arr[i] == 'V')){
            total = total + 9;
        }
        else if((arr[i] == 'W') || (arr[i] == 'X') || (arr[i] == 'Y') || (arr[i] == 'Z')){
            total = total + 10;
        }
    }
    cout << total << "\n";
}
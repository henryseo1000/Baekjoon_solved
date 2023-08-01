#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int total = 0;
    char arr[105] = {};

    cin >> arr;

    for (int i = 0; i < strlen(arr); i++){
        switch (arr[i]){
            case 'c' :
                total++;
                if ((arr[i + 1] == '=') || (arr[i + 1] == '-')){
                    i = i + 1;
                }
                break;

            case 'd' :
                total++;
                if (arr[i + 1] == '-'){
                    i = i + 1;
                }
                else if((arr[i + 1] == 'z') && (arr[i + 2] == '=')){
                    i = i + 2;
                }
                break;

            case 'l' :
                total++;
                if (arr[i + 1] == 'j'){
                    i = i + 1;
                }
                break;

            case 'n' :
                total++;
                if (arr[i + 1] == 'j'){
                    i = i + 1;
                }
                break;

            case 's' :
                total++;
                if (arr[i + 1] == '='){
                    i = i + 1;
                }
                break;

            case 'z' :
                total++;
                if (arr[i + 1] == '='){
                    i = i + 1;
                }
                break;
            default :
                total++;
                break;
        }
    }
    cout << total << "\n";
}
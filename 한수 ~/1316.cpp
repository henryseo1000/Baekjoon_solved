#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int word = 0;
    int total = 0;
    char arr[105] = {};
    char num[26] = {};

    cin >> word;

    total = word;
    for (int i = 0; i < word; i++){
        cin >> arr;
        for(int j = 0; j < strlen(arr); j++){
            if (num[arr[j] - 'a'] == 0){
                if (arr[j] == arr[j+1]){

                }
                else {
                    num[arr[j] - 'a'] = 1;
                }
            }
            else {
                total--;
                break;
            }
        }
        for(int k = 0; k < 26; k++){
            num[k] = 0;
        }
    }
    cout << total << "\n";
}
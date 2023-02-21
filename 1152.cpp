#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);
    int count = 0;

    char arr[1000005] = {};
    cin.getline(arr, 1000005);

    int length = strlen(arr);

    for (int i = 0; i < length; i++){
        if (arr[i] != ' '){
            if ((arr[i + 1] == ' ') || (arr[i + 1] == '\0')){
                count ++;
            }
        }
    }
    cout << count << "\n";
}
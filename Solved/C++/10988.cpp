#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int b, c;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int length = 0;
    int ispel = 1;
    char list[101];

    cin >> list;
    length = strlen(list);

    for(int i = 0; i < length; i++){
        if (length == 1){
            break;
        }
        else if(list[i] != list[length - 1 - i]){
            ispel = 0;
            break;
        }
    }

    cout << ispel << "\n";
}
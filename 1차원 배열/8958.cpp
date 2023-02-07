#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int num = 0;
    int row = 1;
    int total = 0;

    cin.tie(NULL);
    cin.sync_with_stdio(false);

    cin >> num;
    for (int i = 0; i < num; i++){
        char buffer[80];
        cin >> buffer;

        int length = strlen(buffer);

        for (int i = 0; i < length; i++){
            if (buffer[i] == 'O'){
                if (i == 0){
                    total = total + 1;
                }
                else if(buffer[i] == buffer[i - 1]) {
                    row ++;
                    total = total + row;
                }
                else {
                    total = total + row;
                }
            }
            else {
                row = 1;
            }
        }
        cout << total << "\n";
        total = 0;
        row = 1;
    }
}
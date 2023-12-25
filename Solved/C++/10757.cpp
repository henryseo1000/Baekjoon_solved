#include <iostream>
#include <string.h>
using namespace std;

int reverse (char * num){
    int length = strlen(num);
    for(int i = 0; i < length / 2; i++){
        char temp = num[i];
        num[i] = num[length - 1 - i];
        num[length - 1 - i] = temp;
    }
    return length;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    char num1[10001] = {};
    char num2[10001] = {};
    char num3[10001] = {};
    int max;
    int isplus = 0;
    int i;

    cin >> num1 >> num2;

    max = reverse(num1);

    if(reverse(num2) > max){
        max = strlen(num2);
    }

    //cout << num1 << "\n";
    for(i = 0; i < max; i++){
        if (num1[i] != '\0' && num2[i] != '\0'){
            if(num1[i] - '0' + num2[i] - '0' + isplus >= 10){
                num3[i] = num1[i] + num2[i] - '0' - 10 + isplus;
                isplus = 1;
            }
            else{
                num3[i] = num1[i] + num2[i] - '0' + isplus;
                isplus = 0;
            }
        }
        else {
            if (num1[i] + num2[i] - '0' + isplus >= 10){
                num3[i] = num1[i] + num2[i] - 10 + isplus;
                isplus = 1;
            }
            else{
                num3[i] = num1[i] + num2[i] + isplus;
                isplus = 0;
            }
        }
        cout << isplus << "\n";
    }

    if (isplus == 1){
        num3[i + 1] = 1;
    }
    
    reverse(num3);
    cout << num3 << "\n";
}

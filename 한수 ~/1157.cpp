#include <iostream>
#include <string.h>

int main(){
    char arr[1000005];
    int word[26];
    int max = 0;
    char answer;
    int length;

    scanf("%s", arr);
    length = strlen(arr);

    for(int i = 0; i < length; i++){
        if (arr[i] >= 'a'){
            word[arr[i] - 'a']++;
        }
        else {
            word[arr[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++){
        if (word[i] == max){
            answer = '?';
        }
        else if (word[i] > max){
            max = word[i];
            answer = i + 'A';
        }
    }
    printf("%c", answer);
    return 0;
}
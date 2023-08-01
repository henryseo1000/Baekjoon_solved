#include <iostream>
#include <string.h>
using namespace std;

int c = 0;
int recursion(const char *s, int l, int r){
    if(l >= r){ 
        c++;
        return 1;
    }
    else if(s[l] != s[r]){ 
        c++;
        return 0;
    }
    else {
        c++;
        return recursion(s, l+1, r-1);
    }
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);
    int a;
    cin >> a;

    for(int i = 0; i < a; i++){
        char temp[1010];
        cin >> temp;
        cout << isPalindrome(temp) << " " << c << "\n";
        c = 0;
    }
}
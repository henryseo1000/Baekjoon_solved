#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, count, num, up, down;
    count = 1;
    num = 1;
    cin >> a;

    for(int i = 1; i <= count; i++){
        for(int j = 1; j <= i; j++){
            if (a == 1){
                up = 1;
                down = 1;
                break;
            }
            else if ((a >= num) && (a <= num + count - 1)) {
                down = a - (num - 1);
                up = (count + 1) - down;
                break;
            }
            else {
                num = num + count;
                count ++;
            }
        }
    }
    if (count % 2){
        cout << up << "/" << down << "\n";
    }
    else {
        cout << down << "/" << up << "\n";
    }
}
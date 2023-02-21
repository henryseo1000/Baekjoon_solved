#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, count, num;
    num = 1;
    count = 1;
    cin >> a;

    for (int i = 1; i <= count; i++){
        if (a == 1){
            break;
        }
        else if ((a <= (num + ((count - 1) * 6 - 1))) && (a >= num)){
            break;
        }
        else {
            if (num == 1){
                num++;
            }
            else{
                num = num + (count - 1) * 6;
            }
            count++;
        }
    }

    cout << count << "\n";
}
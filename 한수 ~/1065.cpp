#include <iostream>
using namespace std;

void num(int number){
    int count = 0;
    for(int i = 1; i <= number; i++){
        if (i < 100){
            count++;
        }
        else if (i >= 100 && i < 1000){
            if ((i / 10 % 10) - (i % 10) == (i / 100) - (i / 10 % 10)){
                count++;
            }
        }
        else {
            break;
        }
    }
    cout << count << "\n";
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);
    int a;
    cin >> a;
    num(a);
}
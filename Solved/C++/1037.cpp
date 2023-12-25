#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, min, max;
    min = 0;
    max = 0;

    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        if (i == 0){
            min = b;
        }
        else if (b < min){
            min = b;
        }
        if (b > max){
            max = b;
        }
    }

    cout << min * max << "\n";
}
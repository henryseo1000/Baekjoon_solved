#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, two, five, min;
    two = 0;
    five = 0;
    min = 0;
    cin >> num;

    for(int i = 1; i <= num; i++){
        int temp = i;
        while (i % 2 == 0){
            i = i / 2;
            two++;
        }
        while (i % 5 == 0){
            i = i / 5;
            five++;
        }
        i = temp;
    }

    if (two < five){
        cout << two << "\n";
    }
    else {
        cout << five << "\n";
    }
}
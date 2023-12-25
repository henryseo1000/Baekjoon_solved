#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, min, num, left1, left2;
    int list[101] = {};
    cin >> num;

    for (int k = 0; k < num; k++){
        cin >> a;
        if (k == 0){
            min = a;
        }
        else if(a < min){
            min = a;
        }
        list[k] = a;
    }

    list[num] = '\0';

    for(int i = 2; i <= min; i++){
        for(int j = 0; j < num; j++){
            left2 = left1;
            left1 = list[j] % i;
            if(j == 0){

            }
            else if(left1 != left2){
                break;
            }
        }
        if(left1 == left2){
            cout << i << " ";
        }
    }
    cout << "\n";
}
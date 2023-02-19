#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int max = 0;
    int num1 = 1, num2 = 1;
    int **list1;
    list1 = new int *[9];

    for(int i = 0; i < 9; i++){
        list1[i] = new int[9];
    }

    for (int i = 0; i < 9; i++){
        for(int k = 0; k < 9; k++){
            int c;
            cin >> c;
            list1[i][k] = c;
        }
    }

    max = list1[0][0];

    for (int i = 0; i < 9; i++){
        for(int k = 0; k < 9; k++){
            if(list1[i][k] > max){
                max = list1[i][k];
                num1 = i + 1;
                num2 = k + 1;
            }
        }
    }

    cout << max << "\n";
    cout << num1 << " " << num2 << "\n";
}
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);
    
    int a, b;
    cin >> a >> b;

    int **list1;
    list1 = new int *[a];

    for(int i = 0; i < a; i++){
        list1[i] = new int[b];
    }

    for (int i = 0; i < a; i++){
        for(int k = 0; k < b; k++){
            int c;
            cin >> c;
            list1[i][k] = c;
        }
    }

    for (int i = 0; i < a; i++){
        for(int k = 0; k < b; k++){
            int c;
            cin >> c;
            list1[i][k] = list1[i][k] + c;
        }
    }

    for (int i = 0; i < a; i++){
        for(int k = 0; k < b; k++){
            cout << list1[i][k] << " ";
        }
        cout << "\n";
    }
}
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, c, count;
    count = 0;
    int **list1;
    list1 = new int *[100];

    for(int i = 0; i < 100; i++){
        list1[i] = new int[100];
    }

    cin >> a;

    for(int i = 0; i < a; i++){
        cin >> b >> c;
        for(int k = b; k < b + 10; k++){
            for(int j = c; j < c + 10; j++){
                if(list1[k][j] == 0){
                    list1[k][j] = 1;
                    count ++;
                }
            }
        }
    }

    cout << count << "\n";
}
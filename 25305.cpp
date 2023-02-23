#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, in, k;
    int list[1001] = {};

    cin >> num >> k;

    for(int i = 0; i < num; i++){
        cin >> in;
        list[i] = in;
    }

    list[num] = '\0';
    
    for(int i = 0; i < num; i++){
        for(int j = i; j > 0; j--){
            if (list[j] > list[j - 1]){
                int temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
    }

    cout << list[k - 1] << "\n";
}
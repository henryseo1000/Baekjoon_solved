#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, in, max;
    int list[1000001] = {};
    max = 0;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> in;
        list[i] = in;
    }

    list[num] = '\0';
    
    for(int i = 0; i < num; i++){
        for(int j = i; j > 0; j--){
            if (list[j] < list[j - 1]){
                int temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
    }

    for(int i = 0; i < num; i++){
        cout << list[i] << "\n";
    }
}
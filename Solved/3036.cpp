#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num, max;
    int list[101];
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> list[i];
    }

    for(int j = 1; j < num; j++){
        max = list[0];
        if (list[j] > list[0]){
            max = list[j];
        }
        for(int i = max; i >= 1; i--){
            if ((list[j] % i == 0) && (list[0] % i == 0)){
                max = i;
                break;
            }
        }
        cout << list[0] / max << "/" << list[j] / max << "\n";
    }
    
}
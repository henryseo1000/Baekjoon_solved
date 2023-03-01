#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int size, num;
    int from, to, mid;
    cin >> size >> num;

    int * list = new int[size];

    for(int i = 0; i < size; i++){
        list[i] = i + 1;
    }

    for(int i = 0; i < num; i++){
        cin >> from >> to >> mid;
        for(int k = mid - 1; k <= to - 1; k++){
            list[k]
        }

        for(int j = from; j <= mid - 1; j++){

        }

    }

    for(int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
    cout << "\n";
}
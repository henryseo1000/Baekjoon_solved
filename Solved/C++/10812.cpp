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
        int * temp = new int[mid - from];
        for(int j = from - 1; j < mid - 1; j++){
            temp[j - (from - 1)] = list[j];
        }
        for(int k = mid - 1; k < to; k++){
            list[k - (mid - from)] = list[k];
        }
        for(int l = 0; l < mid - from; l++){
            list[mid + l - 1] = temp[l];
        }
        for(int i = 0; i < size; i++){
            cout << list[i] << " ";
        }
    }

    for(int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
    cout << "\n";
}
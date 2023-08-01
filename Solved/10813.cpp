#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int N, M, to, from;

    cin >> N >> M;

    int * list = new int[N];

    for(int i = 0; i < N; i++){
        list[i] = i + 1;
    }

    for(int i = 0; i < M; i++){
        cin >> from >> to;
        int temp = list[from - 1];
        list[from - 1] = list[to - 1];
        list[to - 1] = temp;
    }

    for(int i = 0; i < N; i++){
        cout << list[i] << " ";
    }
    cout << "\n";
}
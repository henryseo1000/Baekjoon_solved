#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int N, M, to, from, num;

    cin >> N >> M;

    int * list = new int[N];

    for(int i = 0; i < M; i++){
        cin >> from >> to >> num;
        for(int j = from - 1; j <= to - 1; j++){
            list[j] = num;
        }
    }

    for(int i = 0; i < N; i++){
        cout << list[i] << " ";
    }
    cout << "\n";
}
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int H, W, N, T;
    int floor = 1;
    int door = 1;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> H >> W >> N;
        for (int j = 1; j <= W; j++){
            if ((N <= H * j) && (N > H * (j - 1))){
                floor = N - H * (j - 1);
                door = j;
            }
            
        }
        if(door >= 10){
            cout << floor << door << "\n";
        }
        else {
            cout << floor << 0 << door << "\n";
        }
    }
}

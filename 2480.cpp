#include <iostream>
using namespace std;

int main(){
    int H, M, C;
    cin >> H >> M >> C;
    int money;

    if ((H == M) && (M == C)){
        money = 10000 + H * 1000;
    }
    else if ((H == M) || (H == C) || (M == C)){
        if(H == M){
            money = 1000 + H * 100;
        }
        else if(H == C){
            money = 1000 + H * 100;
        }
        else {
            money = 1000 + M * 100;
        }
    }
    else {
        int max;
        if (H > M){
            max = H;
        }
        else {
            max = M;
        }
        if (max > C){
            
        }
        else {
            max = C;
        }
        money = max * 100;
    }
    cout << money << endl;
}
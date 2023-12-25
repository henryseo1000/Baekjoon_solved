#include <iostream>
using namespace std;

int main(){
    int H, M, C;
    cin >> H >> M;
    cin >> C;

    H = H + C / 60;
    M = M + C % 60;

    while (M >= 60){
        M = M - 60;
        H++;
    }

    while (H >= 24){
        H = H - 24;
    }

    cout << H << " " << M << endl;
}
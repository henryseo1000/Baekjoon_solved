#include <iostream>
using namespace std;

int main(){
    int H, M;
    cin >> H >> M;
    if (M >= 45){
        M = M - 45;
    }
    else {
        M = M + 60 - 45;
        if (H == 0) {
            H = 23;
        }
        else{
            H = H - 1;
        }
    }
    cout << H << " " << M << endl;
}
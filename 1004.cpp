#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int x1, y1, x2, y2, cx, cy, r;
    int num, pnum;

    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> pnum;
        for(int j = 0; j < pnum; j++){
            cin >> cx >> cy >> r;
        }
    }
}
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int x, y, w, h, xmin, ymin;

    cin >> x >> y >> w >> h;

    if(2 * x > w){
        xmin = w - x;
    }
    else {
        xmin = x;
    }

    if(2 * y > h){
        ymin = h - y;
    }
    else {
        ymin = y;
    }

    if (xmin > ymin){
        cout << ymin << "\n";
    }
    else {
        cout << xmin << "\n";
    }
}
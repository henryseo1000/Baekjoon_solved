#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int x, y;
    int xmin = 1001, ymin = 1001, xmax = 0, ymax = 0;
    int xlist[3] = {};
    int ylist[3] = {};

    for(int i = 0; i < 3; i++){
        cin >> xlist[i] >> ylist[i];
        if (xlist[i] < xmin){
            xmin = xlist[i];
        }
        if (ylist[i] < ymin){
            ymin = ylist[i];
        }
        if (xlist[i] > xmax){
            xmax = xlist[i];
        }
        if (ylist[i] > ymax){
            ymax = ylist[i];
        }
    }

    
}
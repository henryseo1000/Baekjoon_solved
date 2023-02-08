#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);
    int a, b, c, total1, total2 , num;
    num = 1;
    cin >> a >> b >> c;

    while (true){
        if (b >= c){
            cout << -1 << "\n";
            break;
        }
        else {
            cout << (a/(c-b)) + 1 << "\n";
            break;
        }
    }

}
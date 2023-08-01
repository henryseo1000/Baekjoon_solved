#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    for (int i = 1; i <= a; i++){
        cin >> b >> c;
        cout << "Case #" << i << ": " << b << " + " << c << " = " << b + c << "\n";
    }
}
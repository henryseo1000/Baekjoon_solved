#include <iostream>
using namespace std;

int main(){
    int k, q, r, b, n, p;
    cin >> k >> q >> r >> b >> n >> p;
    k = 1 - k;
    q = 1 - q;
    r = 2 - r;
    b = 2 - b;
    n = 2 - n;
    p = 8 - p;
    cout << k << " " << q << " " << r << " " << b << " " << n << " " << p << endl;
}
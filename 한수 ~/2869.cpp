#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int A, B, V, count;
    count = 1;
    cin >> A >> B >> V;

    V = V - A;

    count = V / (A - B);

    if (V % (A - B) != 0){
        count ++;
    }
    else {

    }
    count ++;

    cout << count << "\n";
}
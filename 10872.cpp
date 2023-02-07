#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int total = 1;

    for(int i = n; i > 0; i--){
        total = total * i;
    }

    cout << total << endl;
}
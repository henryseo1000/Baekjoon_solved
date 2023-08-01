#include <iostream>
using namespace std;

int main(){
    int money, item1, total;
    total = 0;
    cin >> money >> item1;
    for (int i = 1; i <= item1; i++){
        int price, item2;
        cin >> price >> item2;
        total = total + price * item2;
    }
    if (total == money){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
#include <iostream>
using namespace std;

int p(int num){
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return p(num - 1) + p(num - 2);
    }
}

int main(){
    int a;
    cin >> a;
    cout << p(a) << endl;
}
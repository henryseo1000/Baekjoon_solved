#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int total = 0;
    int num;
    char a;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> a;
        total =  total + ((int)a - '0');
    }
    
    cout << total << "\n";
}
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num;
    char list[1001];

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> list;
        cout << list[0];
        cout << list[strlen(list) - 1] << "\n";
    }
    
}
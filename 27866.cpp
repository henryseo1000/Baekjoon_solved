#include <iostream>
using namespace std;

int main(){
    int index;
    char s[1001];
    
    cin >> s >> index;
    cout << s[index - 1] << endl;

    return 0;
}
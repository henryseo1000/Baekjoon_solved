#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int num;
    string word;

    while (!(getline(cin, word).eof())){
        cout << word << "\n";
    }
    
}
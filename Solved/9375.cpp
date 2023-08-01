#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int n, m;
    int num1, num2;

    num1 = num2 = 1;

    cin >> num1;

    for(int k = 0; k < num1; k++){
        num2 = 1;
        cin >> n >> m;
        
        for(int i = 0; i < m; i++){
            num2 *= m - i;
            num2 /= 1 + i;
        }

        cout << num2 << "\n";
    }
    
}
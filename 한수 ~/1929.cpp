#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, count;
    count = 0;
    int prime = 0; //prime이 0이면 소수
    while (1){
        cin >> a;
        if (a == 0){
            break;
        }
        for(int i = a + 1; i <= a * 2; i++){
            for(int j = 2; j <= i/2 + 1; j++){
                if(i % j == 0){
                    prime ++;
                    break;
                }
            }
            if (prime != 0){
                prime = 0;
            }
            else {
                count ++;
            }
        }
        cout << count << "\n";
        count = 0;
    }
}
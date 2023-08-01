#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int max = 0;
    double total = 0;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    cin >> num;
    double * test = new double[num];

    for(int i = 0; i < num; i++){
        cin >> test[i];
    }
    max = test[0];
    for(int i = 0; i < num; i++){
        if (test[i] > max){
            max = test[i];
        }
    }
    for (int i = 0; i < num; i++){
        test[i] = (double)(test[i] / max) * 100;
        total = total + test[i];
    }

    printf("%.9lf\n", total/num);
}
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int num, student;
    double total, count;
    count = 0;
    total = 0;
    cin >> num;

    for (int i = 0; i < num; i++){
        cin >> student;
        int * score = new int[student];
        for (int i = 0; i < student; i++){
            cin >> score[i];
            total = total + score[i];
        }
        total = total / (double)student;
        for(int i = 0; i < student; i++){
            if (score[i] > total){
                count++;

            }
        }
        printf("%.3lf%%\n", (double)(count/student) * 100);
        total = 0;
        count = 0;
    }
}
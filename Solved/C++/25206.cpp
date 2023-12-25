#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    string subject;
    char grade[3] = {};
    float credit, total_c = 0, total = 0;

    for(int i = 0; i < 20; i++){
        cin >> subject >> credit >> grade;
        if (grade[0] != 'P'){
            total_c += credit;
        }
        
        if (grade[0] == 'A'){
            if(grade[1] == '+'){
                total += credit * 4.5;
            }
            if(grade[1] == '0'){
                total += credit * 4.0;
            }
        }
        else if (grade[0] == 'B'){
            if(grade[1] == '+'){
                total += credit * 3.5;
            }
            if(grade[1] == '0'){
                total += credit * 3.0;
            }
        }
        else if (grade[0] == 'C'){
            if(grade[1] == '+'){
                total += credit * 2.5;
            }
            if(grade[1] == '0'){
                total += credit * 2.0;
            }
        }
        else if (grade[0] == 'D'){
            if(grade[1] == '+'){
                total += credit * 1.5;
            }
            if(grade[1] == '0'){
                total += credit * 1.0;
            }
        }
    }
    
    cout << fixed;
    cout.precision(6);
    cout << total / total_c << "\n";
}
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false);

    int max_crane = 0;
    int max_boxes = 0;
    int crane = 0;
    int weight_limit[50];
    int weight[10000];
    int boxes = 0;

    // 처음에 크레인의 개수를 입력받는다.
    cin >> crane;

    // 크레인의 개수만큼 반복하여 각 크레인의 무게 제한을 배열에 넣어준다.
    for(int i = 0; i < crane; i++){
        cin >> weight_limit[i];
        if(weight_limit[i] > max_crane){
            max_crane = weight_limit[i];
        }
    }

    // 박스의 개수를 입력받는다.
    cin >> boxes;

    // 박스의 개수만큼 반복하여 각 크레인의 무게 제한을 배열에 넣어준다.
    for(int i = 0; i < boxes; i++){
        cin >> weight[i];
        if(weight[i] > max_boxes){
            max_boxes = weight[i];
        }
    }

    // 탐욕적으로 접근 : weight_limit 중에서 가장 큰 값과 weight 중에서 가장 큰 값을 비교 -> -1 출력?
    if(max_boxes > max_crane){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << 0 << endl;
    }


    for(int i = 0; i < boxes; i++){}
}
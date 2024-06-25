#include <stdio.h>

void calculate (int charge){
  int remain = charge;
  int array[4] = {25, 10, 5, 1};
  for(int i = 0; i < 4; i++){
    printf("%d ", remain / array[i]);
    remain = remain % array[i];
  }
  printf("\n");
}

int main(){
  int input = 1;
  int num = 0;

  scanf("%d", &num);

  for (int i = 0; i < num; i++){
    scanf("%d", &input);
    calculate(input);
  }
}
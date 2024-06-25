#include <stdio.h>

int main(){
  int result = 1;
  int input = 0;
  int arr_res[10] = {0};

  int remain = 1;

  for(int i = 0; i < 3; i++){
    scanf("%d", &input);
    result *= input;
  }

  while(result != 0){
    remain = result % 10;
    result = result / 10;

    arr_res[remain]++;
  }

  for(int i = 0; i < 10; i++){
    printf("%d\n", arr_res[i]);
  }
}
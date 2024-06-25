#include <stdio.h>
#include <string.h>

int array[30] = {0};

void print_num(int remain){
  if(remain < 10){
    printf("%d", remain);
  }
  else {
    remain = remain - 10 + 'A';
    printf("%c", remain);
  }
}

int main(){
  int input = 1;
  int input_num = 0;
  int remain = 0;
  int index = 0;
  int length = 0;

  scanf("%d%d", &input, &input_num);

  while(input){
    remain = input % input_num;
    input = input / input_num;

    array[index] = remain;
    index++;
  }

  for(int i = index - 1; i >= 0; i--){
    print_num(array[i]);
  }

  printf("\n");
}
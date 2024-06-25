#include <stdio.h>

int main(){
  int floor = 0;
  int res = 1;

  scanf("%d", &floor);

  for(int i = 0; i < floor; i++){
    res = res * 2;
  }

  printf("%d\n", res);
}
#include <stdio.h>
#include <math.h>

int main(){
  int num = 0;
  int res = 1;
  scanf("%d", &num);

  for (int i = 0; i < num; i++){
    res = res * 2;
  }
  
  res = res + 1;
  res = res * res;
  
  printf("%d\n", res);
}
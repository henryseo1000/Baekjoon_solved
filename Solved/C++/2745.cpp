#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  int demical = 0;
  long long n = 0;
  char input[30];
  int len = 0;
  int num_buf = 0;

  scanf("%s", input);
  scanf("%lld", &n);
  len = strlen(input);

  for(int i = len - 1; i >= 0; i--){
    if('0' <= input[i] && input[i] <= '9'){
      num_buf = input[i] - '0';
    }
    else{
      num_buf = input[i] - 'A' + 10;
    }
    demical += pow(n, len - 1 - i) * num_buf;
  }
  
  printf("%d\n", demical);
}
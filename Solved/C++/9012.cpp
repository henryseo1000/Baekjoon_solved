#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int count = 0; // 테스트 케이스 개수
  int index = 0; // 저장된 테스트케이스의 인덱스
  char ** s_array;
  char buf[50]; // 입력을 임시로 저장할 버퍼
  int open_num = 0; // 열리는 괄호의 숫자를 센다.
  bool isValid = true;


  // 케이스 개수를 입력 받아 동적 할당
  scanf("%d", &count);
  s_array = (char**)malloc(sizeof(char*) * count);

  // 개수만큼 입력을 받아 buf에 저장한다.
  for(int i = 0; i < count; i++){
    scanf("%s", buf);
    s_array[i] = (char *)malloc(strlen(buf) * sizeof(char));
    strcpy(s_array[i], buf);
  }

  for(int i = 0; i < count; i++){
    int len = strlen(s_array[i]);
    for(int j = 0; j < len; j++){
      if(s_array[i][j] == '('){
        open_num ++;
      }
      if(s_array[i][j] == ')'){
        open_num --;
        if(open_num < 0){
          isValid = false;
          break;
        }
      }
    }

    if(open_num != 0){
      isValid = false;
    }

    if(isValid){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }

    open_num = 0;
    isValid = true;
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
  stack * next;
  int value;
}stack;

// push, size, empty, pop, top
void push(stack** arr, int val){
  stack ** ptr = arr;
  stack * t = NULL;

  t = *ptr;

  if ((*ptr) == NULL){
    (*ptr) = (stack *)malloc(sizeof(stack));
    (*ptr) -> value = val;
    (*ptr) -> next = NULL;
  }
  else{
    while((t -> next) != NULL){
      t = t -> next;
    }

    t -> next = (stack *)malloc(sizeof(stack));
    t -> next -> value = val;
    t -> next -> next = NULL;
  }
}

void size(stack** arr){
  stack ** ptr = arr;
  stack * t = NULL;
  int count = 0;

  t = *ptr;

  if ((*ptr) == NULL){
    printf("%d\n", 0);
    return;
  }

  while((t -> next) != NULL){
    t = t -> next;
    count ++;
  }
  count ++;

  printf("%d\n", count);
}

void empty(stack** arr){
  stack ** ptr = arr;

  if ((*ptr) == NULL){
    printf("%d\n", 1);
  }
  else{
    printf("%d\n", 0);
  }
}

void pop(stack** arr){
  stack ** ptr = arr;
  stack * t = NULL;

  t = *ptr;

  if((*ptr) == NULL){
    printf("%d\n", -1);
    return;
  }
  else if((*ptr) -> next == NULL){
    printf("%d\n", (*ptr) -> value);
    (*ptr) = NULL;
    return;
  }
  else{
    while((t -> next -> next) != NULL){
      t = t -> next;
    }

    printf("%d\n", t -> next -> value);

    t -> next = NULL;
  }

  
}

void top(stack** arr){
  stack ** ptr = arr;
  stack * t = NULL;

  t = *ptr;

  if((*ptr) == NULL){
    printf("%d\n", -1);
    return;
  }

  while((t -> next) != NULL){
    t = t -> next;
  }

  printf("%d\n", t -> value);
}

int main(){
  stack * arr = NULL;
  int count = 0;
  int val = 0;
  char buf[30];

  scanf("%d", &count);

  for(int i = 0; i < count; i++){
    scanf("%s", buf);
    if(strstr(buf, "pop")){
      pop(&arr);
    }
    else if(strstr(buf, "size")){
      size(&arr);
    }
    else if(strstr(buf, "push")){
      scanf("%d", &val);
      push(&arr, val);
    }
    else if(strstr(buf, "empty")){
      empty(&arr);
    }
    else if(strstr(buf, "top")){
      top(&arr);
    }
    else{

    }
  }

  return 0;
}
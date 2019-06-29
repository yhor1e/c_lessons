#include <stdio.h>

float getMax (float a, float b);

void f(void) {
  int a = 0;
  a++;
  printf("a:%d\n", a);
}


int main(void){

  f();

  printf("a:%d\n", a);

  return 0;
}

#include <stdio.h>

float getMax (float a, float b);

void f(void) {
  static int a = 0;
  a++;
  printf("a:%d\n", a);
}


int main(void){

  f();
  f();
  f();

  return 0;
}

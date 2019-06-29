#include <stdio.h>

float getMax (float a, float b);

int main(void){

  float result;
  result = getMax(2.3, 5.2);
  printf("%f\n", result);

  return 0;
}

float getMax (float a, float b){
  return (a >= b) ? a: b;
}

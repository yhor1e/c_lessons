#include <stdio.h>

int main(void){

  int sales[3];
  sales[0] = 200;
  sales[1] = 400;
  sales[2] = 500;

  printf("%d\n", sales[1]);

  int sales2[] = {200, 400, 500};

  printf("%d\n", sales2[1]);

  return 0;
}

#include <stdio.h>

int main(void){

  /*
  int m = 20;

  while(m < 10) {
    printf("m: %d\n", m);
    m++;
  }
  */

  int m;
  for (m = 0; m < 10; m++){
    if (m == 3) {
      continue;
    }
    if (m == 8) {
      break;
    }
    printf("m: %d\n", m);
  }


  return 0;
}

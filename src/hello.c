#include <stdio.h>

int main(void){

  int score = 40;

  if (score >= 60) {
    printf("OK!\n");
  } else if (score >= 50) {
    printf("so so...\n");
  } else {
    printf("NG!\n");
  }

  return 0;
}

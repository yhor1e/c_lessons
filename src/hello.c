#include <stdio.h>

int main(void){

  char s1[] = {'a', 'b', 'c', '\0'};
  char s2[] = "abc";

  printf("%c\n", s1[1]);
  printf("%c\n", s2[1]);

  return 0;
}

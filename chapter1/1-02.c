#include <stdio.h>

int main()
{
  // printf("Hello,\c world!\n");
  // chapter1/1_2.c:5:17: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
  //   printf("Hello,\c world!\n");
  //                 ^~
  // 1 warning generated.
  printf("Hello, world!\n");
  return 0;
}

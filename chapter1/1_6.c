#include <stdio.h>

int main()
{
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    printf("\n");
    c = getchar();
    printf("getchar() == EOF: %d\n", c == EOF);
  }
  printf("getchar() == EOF: %d\n", c == EOF);
  return 0;
}

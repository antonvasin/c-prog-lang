#include <stdio.h>

#define TABWIDTH 2

int main()
{
  int c;
  int linestart = 1;
  while ((c = getchar()) != EOF) {
    if (c == '\t' && linestart == 1) {
      for (int i = 0; i <= TABWIDTH; ++i) {
        putchar(' ');
      }
    } else if (c == '\n') {
      putchar(c);
      linestart = 1;
    } else {
      putchar(c);
      linestart = 0;
    }
  }
  putchar('\n');
  return 0;
}


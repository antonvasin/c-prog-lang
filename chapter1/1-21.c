#include <stdio.h>

#define TABWIDTH 2

int main()
{
  int c;
  int spaces = 0;
  while ((c = getchar()) != EOF) {
    if (spaces >= 0 && c == ' ') {
      ++spaces;
    } else {
      if (spaces > 0) {
        for (int i = 0; i < spaces / TABWIDTH; ++i) {
          putchar('\t');
        }
        for (int i = 0; i < spaces % TABWIDTH; ++i) {
          putchar(' ');
        }
        spaces = -1;
      }
      if (c == '\n') spaces = 0;
      putchar(c);
    }
  }
  return 0;
}


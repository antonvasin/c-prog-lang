#include <stdio.h>

#define ALEN 127

int main()
{
  int c;
  int count[ALEN];
  for (int i = 0; i < ALEN; ++i) count[i] = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != ' ' && c != '\t') {
      ++count[c];
    }
  }
  for (int i = 0; i < ALEN; ++i) {
    if (count[i] > 0) {
      putchar(i);
      putchar(' ');
      for (int j = 0; j < count[i]; ++j) putchar('|');
      printf("\n");
    }
  }

  return 0;
}

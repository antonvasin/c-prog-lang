#include <stdio.h>

#define IN  1
#define OUT 0
// assume the longest word is 45 symbols
#define WLEN 45

int main()
{
  int c;
  int state = OUT;
  int cur = 0;
  int count[WLEN];
  for (int i = 0; i < WLEN; ++i) count[i] = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ' || c == '\t') {
      ++count[cur];
      cur = 0;
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++cur;
    } else {
      ++cur;
    }
  }
  for (int i = 0; i < WLEN; ++i) {
    if (count[i] > 0) {
      printf("%2d ", i);
      for (int j = 0; j < count[i]; ++j) putchar('|');
      printf("\n");
    }
  }

  return 0;
}

#include <stdio.h>

#define PRINTWIDTH 80
#define WORDBUFLEN 500

int getword(char[], int);

// read chars into a buffer until whitespace/tab
// if curpos + wordlen < PRINTWIDTH, print the word
// else print \n and then print the word
int main()
{
  int col = 0;
  int len;
  char wordbuf[WORDBUFLEN];
  while ((len = getword(wordbuf, WORDBUFLEN)) > 0) {
    if (col + len < PRINTWIDTH) {
      printf("%s", wordbuf);
      col += len;
    } else {
      if (len < PRINTWIDTH) {
        printf("\n%s", wordbuf);
        col = len-1;
      } else {
        // handling very long words
        for (int j = 0; j < len; ++j) {
          putchar(wordbuf[j]);
          ++col;
          if (col >= PRINTWIDTH) {
            printf("\n >");
            col = 2;
          }
        }
      }
    }
    if (wordbuf[len-1] == '\n') col = 0;
  }
  return 0;
}

int getword(char w[], int maxlen)
{
  int c, i;

  for (i=0; (c=getchar()) != EOF && c != '\n' && c != ' ' && c!='\t'; ++i) {
    if (i < maxlen - 1) w[i] = c;
  }

  if (c== '\n' || c == ' ' || c == '\t') {
    w[i] = c;
    ++i;
  }

  w[i] = '\0';
  return i;
}

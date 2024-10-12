#include <stdio.h>

#define MAXLINE 1000

int getln(char[], int);

int main()
{
  int len;
  char line[MAXLINE];
  while ((len = getln(line, MAXLINE)) > 0)
    if (len > 0) printf("%d - %s\n", len, line);

  return 0;
}

int getln(char s[], int max)
{
  int i, c;
  int tc = -1;
  for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) {
    if (c == '\t' || c == ' ') {
      /* mark potential position for new end of line */
      if (tc == -1) {
        tc = i;
      }
    } else if (tc > -1) {
      tc = -1;
    }
    if (i < max-1) s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  /* mark new end of line if encountered trailing chars */
  if (tc > -1) i = tc;
  s[i] = '\0';
  return i;
}

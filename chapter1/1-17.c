#include <stdio.h>

#define MAXLINE 1000
#define LINELENGTH 80

int getln(char[], int);

int main()
{
  int len;
  char line[MAXLINE];
  while ((len = getln(line, MAXLINE)) > 0)
    if (len >= LINELENGTH) {
      printf("%d - %s\n", len, line);
    }
  return 0;
}

int getln(char s[], int max)
{
  int i, c;
  for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) {
    if (i < max-1) s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

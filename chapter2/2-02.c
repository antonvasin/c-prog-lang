#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getln(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
    printf("%d %s\n", max, longest);
  return 0;
}

int getln(char s[], int lim)
{
  int c;
  int i = 0;
  int valid = 1;

  while (valid) {
    c = getchar();
    if (c == EOF) {
      valid = 0;
    } else if (c == '\n') {
      valid = 0;
    } else if (i >= lim-1) {
      valid = 0;
    } else {
      s[i] = c;
      ++i;
    }
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

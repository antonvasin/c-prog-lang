#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void reverse(char s[], int len);
void copy(char to[], char from[]);

int main()
{
  int len;
  char line[MAXLINE];

  while ((len = getln(line, MAXLINE)) > 0) {
    reverse(line, len);
    printf("%s", line);
  }
  return 0;
}

void reverse(char s[], int len)
{
  char rev[MAXLINE];
  int i = 0;
  while (i < len) {
    rev[len-1-i] = s[i];
    ++i;
  }
  rev[i] = '\0';
  copy(s, rev);
}

int getln(char s[], int lim)
{
  int c, i;

  for (i=0; (c=getchar())!=EOF &c!='\n'; ++i) {
    if (i < lim -1) s[i] = c;
  }
  if (c== '\n') {
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

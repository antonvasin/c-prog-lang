/*
 * Exercise 2-3. Write a function htoi(s), which converts a string of
 * hexadecimal digits (including an optional 0x or 0X) into its equivalent
 * integer value. The allowable digits are 0 through 9, a through f, and A
 * through F.
 * */

#include <stdio.h>
#include <math.h>

#define BUFLEN 100

int getln(char[], int);
int htoi(char[], int);

int main()
{
  char line[BUFLEN];
  int len;
  while ((len = getln(line, BUFLEN)) > 0) {
    // Omit \0 at the end
    printf("%d\n", htoi(line, len-1));
  }
  return 0;
}

int htoi(char s[], int len)
{
  int start = 0;
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    start = 2;
  }
  int base = 1;
  int dec = 0;
  // iterate string from the right side increasing base multiplier each pass
  for (int i = len - 1; i >= start; --i) {
    if (s[i] >= '0' && s[i] <= '9') {
      // move by 48 to get literal value of char
      dec += (s[i] - 48) * base;
    } else if ((s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f')) {
      // move by 55 to get ints starting from 10
      dec += (s[i] - 55) * base;
    }
    base *= 16;
  }
  return dec;
}

int getln(char s[], int lim)
{
  int c, i;

  for (i=0; (c=getchar()) != EOF && c != '\n' && i < lim - 1; ++i) {
    s[i] = c;
  }

  if (c== '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

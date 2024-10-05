#include <stdio.h>

int main()
{
  int c;
  int bl = 0;
  int tb = 0;
  int nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') ++bl;
    if (c == '\t') ++tb;
    if (c == '\n') ++nl;
  }
  printf("Blanks: %d, tabs: %d, newlines: %d\n", bl, tb, nl);
  return 0;
}

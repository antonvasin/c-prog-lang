#include <stdio.h>

int ftoc(int);

int main() {
  int fahr;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  while (fahr <= upper) {
    printf("%d\t%d\n", fahr, ftoc(fahr));
    fahr = fahr + step;
  }

  return 0;
}

int ftoc(int f)
{
  return 5 * (f - 32) / 9;
}

#include <stdio.h>

int main()
{
  float fah, cel;
  float lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fah = lower;
  printf(" F     C\n");
  printf("-----------\n");
  while (fah <= upper) {
    cel = (5.0/9.0) * (fah-32.0);
    printf("%3.0f %6.1f\n", fah, cel);
    fah = fah + step;
  }
  return 0;
}

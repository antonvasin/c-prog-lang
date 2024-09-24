#include <stdio.h>

int main()
{
  float fah, cel;
  float lower, upper, step;
  lower = -20;
  upper = 100;
  step = 10;
  cel = lower;
  printf(" C     F\n");
  printf("-----------\n");
  while (cel <= upper) {
    fah = cel * 9.0 / 5.0 + 32.0;
    printf("%3.0f %6.0f\n", cel, fah);
    cel = cel + step;
  }
  return 0;
}

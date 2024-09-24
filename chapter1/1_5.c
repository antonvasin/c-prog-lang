#include <stdio.h>

int main()
{
  int fah;
  for (fah = 300; fah >= 0; fah -= 20) {
    printf("%3d %6.1f\n", fah, (5.0/9.0)*(fah-32));
  }
  return 0;
}

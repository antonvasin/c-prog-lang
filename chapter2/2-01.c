#include <stdio.h>
#include <limits.h>
#include <float.h>

#define BYTELEN 8

int power(int, int);
int min(int);
int max(int);

int main()
{
  printf("char   %20d %d\n", CHAR_MIN, CHAR_MAX);
  printf("uchar  %20d %d\n", 0, UCHAR_MAX);
  printf("short  %20d %d\n", SHRT_MIN, SHRT_MAX);
  printf("ushort %20d %d\n", 0, USHRT_MAX);
  printf("int    %20d %d\n", INT_MIN, INT_MAX);
  printf("uint   %20d %u\n", 0, UINT_MAX);
  printf("long   %20ld %ld\n", LONG_MIN, LONG_MAX);
  printf("ulong  %20d %lu\n", 0, ULONG_MAX);
  printf("llong  %20lld %lld\n", LLONG_MIN, LLONG_MAX);
  printf("ullong %20d %llu\n\n", 0, ULLONG_MAX);
  return 0;
}

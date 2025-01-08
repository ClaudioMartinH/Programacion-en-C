#include <stdio.h>
int main()
{
  int a = 5;
  int b = 3;
  a += b; // a = a + b
  printf("%d\n", a);
  a -= b; // a = a - b
  printf("%d\n", a);
  a *= b; // a = a * b
  printf("%d\n", a);
  a /= b; // a = a / b
  printf("%d\n", a);
  a %= b; // a = a % b
  printf("%d\n", a);
  a++; // a = a + 1
  printf("%d\n", a);
  a--; // a = a - 1
  printf("%d\n", a);
  return 0;
}
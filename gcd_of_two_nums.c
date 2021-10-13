#include <stdio.h>

int main()
{
  int a, b;
  int c;
  scanf("%d", &a);
  scanf("%d", &b);
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  printf("%d\n", b);
  return 0;
}
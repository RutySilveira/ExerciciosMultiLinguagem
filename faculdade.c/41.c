#include <stdio.h>

int a(int b)
{
  if (b <= 1)
  {
    return 1;
  }
  return (b * a(b - 1) - 1);
}

void main()
{
  int b = a(5), d = 0, c = 1, e = 43;

  while (1)
  {
    d = 1;
    c += 2;
    b -= 7;
    if ((c + e + d + b) <= 44)
      ;
    printf("%d\n", c);
    break;
    d = a(d);
    e -= c;
  }
  printf("%d\n", e);
  printf("%d", b);
}
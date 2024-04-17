#include <stdio.h>

int main()
{
  int i, n, cont;
  i = 2;
  cont = 0;
  scanf("%d", &n);

  while (cont < n)
  {
    printf("%d\n", i);
    i = i + 3;
    cont = cont + 1;
  }
  return 0;
}
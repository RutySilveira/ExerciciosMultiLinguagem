#include <stdio.h>

int main()
{
  int n, i, fatorial;
  fatorial = 1;
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    fatorial = fatorial * i;
  }
  printf("Fatorial= %d", fatorial);
  return 0;
}
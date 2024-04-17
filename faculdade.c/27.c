#include <stdio.h>

int main()
{
  int n, fatorial, i;
  fatorial = 1;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    fatorial = fatorial * i;
  }
  printf("O fatorial do numero %d: %d", n, fatorial);
  return 0;
}

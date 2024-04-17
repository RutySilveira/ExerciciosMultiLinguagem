#include <stdio.h>

int main()
{
  int n, soma;
  soma = 0;

  scanf("%d", &n);

  while (n != 0)
  {
    if (n % 3 == 0)
    {
      soma = soma + n;
    }
    scanf("%d", &n);
  }
  printf("Soma dos multiplos de 3: %d\n", soma);
  return 0;
}

#include <stdio.h>

int main()
{
  int n, m, soma;
  soma = 0;
  scanf("%d %d", &n, &m);

  if (n <= 0 && m <= 0)
  {
    printf("Erro");
  }
  else
  {
    for (int i = n; i <= m; i++)
    {
      if (i % 5 == 0)
      {
        soma = soma + i;
      }
    }
    printf("%d", soma);
  }
}
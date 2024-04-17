#include <stdio.h>

int main()
{
  int i, soma;
  soma = 0;

  for (i = 1; i < 1000; i++)
  {
    if (i % 2 == 0)
    {
      soma = soma + i;
      printf("%d\n", i);
    }
  }
  printf("Soma dos numeros, inteiros pares, menores que 1000:%d\n", soma);
  return 0;
}
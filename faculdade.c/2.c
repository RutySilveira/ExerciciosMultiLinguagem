#include <stdio.h>

int main()
{
  int soma = 0;

  for (int i = 1; i <= 500; i++)
  {
    if (i % 2 != 0 && i % 3 == 0)
    {
      soma += i;
    }
  }

  printf("A soma dos numeros ímpares múltiplos de três, de 1 a 500 é: %d\n", soma);

  return 0;
}

#include <stdio.h>

int main()
{
  int contador = 0;
  int numero = 2;

  printf("Os primeiros 50 numeros primos sao:\n");

  while (contador < 50)
  {
    int ehPrimo = 1;

    for (int i = 2; i * i <= numero && ehPrimo; i++)
    {
      if (numero % i == 0)
      {
        ehPrimo = 0;
      }
    }

    if (ehPrimo)
    {
      printf("%d, ", numero);
      contador++;
    }

    numero++;
  }
  return 0;
}

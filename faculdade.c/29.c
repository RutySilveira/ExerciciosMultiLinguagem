#include <stdio.h>

int main()
{
  int n, quant;
  quant = 0;

  while (1)
  {
    printf("Digite um numero diferente de zero, e zero para parar:\n ");
    scanf("%d", &n);

    if (n == 0)
    {
      break;
    }
    else
    {
      quant += 1;
    }
  }

  printf("A quantidade de numeros lidos, diferentes de zero é: %d\n", quant);

  return 0;
}

#include <stdio.h>

int main()
{
  int numero;
  int quantidade = 0;

  printf("Insira valores numéricos (insira 0 para parar): \n");

  while (1)
  {
    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
      break;
    }

    quantidade++;
  }

  printf("Foram inseridos %d números.\n", quantidade);

  return 0;
}

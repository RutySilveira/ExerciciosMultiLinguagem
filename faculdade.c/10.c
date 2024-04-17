#include <stdio.h>

int main()
{
  int numero, soma = 0;

  printf("Insira valores numéricos (insira 0 para parar): \n");

  printf("Insira um número: ");
  scanf("%d", &numero);

  while (numero != 0)
  {
    soma += numero;
    printf("Insira um número: ");
    scanf("%d", &numero);
  }

  printf("A soma dos valores inseridos é: %d\n", soma);

  return 0;
}

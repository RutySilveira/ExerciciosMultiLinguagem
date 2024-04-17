#include <stdio.h>

int main()
{
  int numero, maior = 0, menor = 0;
  int primeiroNumero = 1; // Flag para identificar o primeiro número

  printf("Insira números inteiros (insira 0 para parar): \n");

  while (1)
  {
    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
      break; // Sai do loop quando o número inserido for zero
    }

    if (primeiroNumero)
    {
      maior = numero;
      menor = numero;
      primeiroNumero = 0;
    }
    else
    {
      if (numero > maior)
      {
        maior = numero;
      }
      if (numero < menor)
      {
        menor = numero;
      }
    }
  }

  if (!primeiroNumero)
  {
    printf("O maior número inserido é: %d\n", maior);
    printf("O menor número inserido é: %d\n", menor);
  }

  return 0;
}

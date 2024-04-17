#include <stdio.h>

int main()
{
  int numero, maior = 0;

  do
  {
    printf("Digite um número inteiro (ou -1 para sair): ");
    scanf("%d", &numero);

    if (numero > maior)
    {
      maior = numero;
    }
  } while (numero != -1);

  if (maior != 0)
  {
    printf("O maior número digitado foi: %d\n", maior);
  }
  else
  {
    printf("Nenhum número positivo foi inserido.\n");
  }

  return 0;
}

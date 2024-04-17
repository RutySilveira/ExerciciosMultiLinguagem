#include <stdio.h>

int main()
{
  int N, i, soma = 0;

  // Solicita ao usuário o valor de N
  printf("Digite o valor de N: ");
  scanf("%d", &N);

  // Calcula o somatório 1 + 22 + 33 + ... + NN
  for (i = 1; i <= N; i++)
  {
    int termo = 0;
    for (int j = 1; j <= i; j++)
    {
      termo = termo * 10 + i;
    }
    soma += termo;
  }

  printf("O resultado do somatório é: %d\n", soma);

  return 0;
}

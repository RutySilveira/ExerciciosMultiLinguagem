#include <stdio.h>

int main()
{
  int M, N, soma = 0;

  printf("Digite o valor de M: ");
  scanf("%d", &M);
  printf("Digite o valor de N: ");
  scanf("%d", &N);

  if (M % 2 == 0)
  {
    M++;
  }

  for (int i = M; i <= N; i += 2)
  {
    soma += i;
  }

  printf("O somatório dos números ímpares no intervalo [%d, %d] é: %d\n", M, N, soma);

  return 0;
}

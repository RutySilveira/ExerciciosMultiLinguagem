#include <stdio.h>

int main()
{
  int N;
  float A = 0.0;

  do
  {
    printf("Digite um número inteiro positivo para N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
      printf("Por favor, insira um número inteiro positivo.\n");
    }
  } while (N <= 0);

  for (int i = 1; i <= N; i++)
  {
    A += (float)(N - i + 1) / i;
  }

  printf("O valor de A é: %.2f\n", A);

  return 0;
}

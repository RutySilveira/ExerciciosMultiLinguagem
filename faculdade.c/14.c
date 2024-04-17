#include <stdio.h>
#include <math.h>

int main()
{
  int N;
  unsigned long long somatorio = 0;
  int i = 0;

  printf("Digite o valor de N: ");
  scanf("%d", &N);

  while (i <= N)
  {
    somatorio += (unsigned long long)pow(3, i);
    i++;
  }

  printf("O somatório da série é: %llu\n", somatorio);

  return 0;
}

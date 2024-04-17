#include <stdio.h>
#include <math.h>

int main()
{
  int n, i;
  unsigned long long int somatorio = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for (i = 2; i <= n; i++)
  {
    somatorio = somatorio + pow(i, i);
  }
  somatorio += 1;

  printf("O resultado do somatorio é: %llu\n", somatorio);

  return 0;
}

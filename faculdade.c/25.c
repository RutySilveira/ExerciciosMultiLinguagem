#include <stdio.h>

int main()
{

  int m, n, somatorio, i;
  somatorio = 0;

  printf("Digite o primeiro numero:");
  scanf("%d", &m);
  printf("Digite o segundo numero:");
  scanf("%d", &n);

  for (i = m; i <= n; i++)
  {

    if (i % 2 != 0)
    {
      somatorio += i;
    }
  }
  printf("O resultado do somatorio é: %d", somatorio);
  return 0;
}
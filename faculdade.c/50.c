#include <stdio.h>

int main()
{
  int i, j, operacao;

  printf("Escolha a operacao:\n");
  printf("1. Adicao\n");
  printf("2. Subtracao\n");
  printf("3. Multiplicacao\n");
  printf("4. Divisao\n");
  printf("Digite o numero da operacao desejada: ");
  scanf("%d", &operacao);

  for (i = 1; i <= 10; i++)
  {
    printf("Tabuada do %d:\n", i);

    for (j = 1; j <= 10; j++)
    {
      int resultado;

      switch (operacao)
      {
      case 1:
        resultado = i + j;
        break;
      case 2:
        resultado = i - j;
        break;
      case 3:
        resultado = i * j;
        break;
      case 4:
        resultado = i / j;
        break;
      }

      printf("%d %c %d = %d\n", i, (operacao == 4) ? '/' : (operacao == 1) ? '+'
                                                       : (operacao == 2)   ? '-'
                                                                           : '*',
             j, resultado);
    }
    printf("\n");
  }
  return 0;
}

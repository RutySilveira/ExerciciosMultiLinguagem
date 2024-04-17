#include <stdio.h>

int main()
{
  int escolha;
  float num1, num2;

  while (1)
  {
    printf("\nEscolha a operacao desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    printf("5 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
      printf("Digite dois numeros para soma: ");
      scanf("%f %f", &num1, &num2);
      printf("Resultado da soma: %.2f\n", num1 + num2);
      break;
    case 2:
      printf("Digite dois numeros para subtracao: ");
      scanf("%f %f", &num1, &num2);
      printf("Resultado da subtracao: %.2f\n", num1 - num2);
      break;
    case 3:
      printf("Digite dois numeros para divisao: ");
      scanf("%f %f", &num1, &num2);
      if (num2 != 0)
      {
        printf("Resultado da divisao: %.2f\n", num1 / num2);
      }
      else
      {
        printf("Nao e possivel dividir por zero!\n");
      }
      break;
    case 4:
      printf("Digite dois numeros para multiplicaÇao: ");
      scanf("%f %f", &num1, &num2);
      printf("Resultado da multiplicacao: %.2f\n", num1 * num2);
      break;
    case 5:
      printf("Saindo do programa...\n");
      return 0;
    default:
      printf("Opcao invalida!\n");
    }
  }

  return 0;
}

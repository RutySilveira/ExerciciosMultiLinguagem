#include <stdio.h>

int main()
{
  int opcao;
  float temperatura, resultado;

  while (1)
  {
    printf("\nMenu de Opcoes\n");
    printf("1 - Converter temperatura de Celsius para Fahrenheit\n");
    printf("2 - Converter temperatura de Celsius para Kelvin\n");
    printf("3 - Converter temperatura de Fahrenheit para Celsius\n");
    printf("4 - Sair\n");
    printf("Informe a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite a temperatura em Celsius: ");
      scanf("%f", &temperatura);
      resultado = (temperatura * 9 / 5) + 32;
      printf("A temperatura em Fahrenheit: %.2f\n", resultado);
      break;
    case 2:
      printf("Digite a temperatura em Celsius: ");
      scanf("%f", &temperatura);
      resultado = temperatura + 273.15;
      printf("A temperatura em Kelvin: %.2f\n", resultado);
      break;
    case 3:
      printf("Digite a temperatura em Fahrenheit: ");
      scanf("%f", &temperatura);
      resultado = (temperatura - 32) * 5 / 9;
      printf("A temperatura em Celsius: %.2f\n", resultado);
      break;
    case 4:
      printf("Encerrando o programa...\n");
      return 0;
    default:
      printf("Opcao invalida!\n");
    }
  }

  return 0;
}

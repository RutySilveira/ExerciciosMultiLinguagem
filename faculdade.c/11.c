#include <stdio.h>

int main()
{
  float raio, comprimento;

  printf("Insira a medida do raio do círculo: ");
  scanf("%f", &raio);

  while (raio <= 0)
  {
    printf("Por favor, insira um valor positivo para o raio: ");
    scanf("%f", &raio);
  }
  comprimento = 2 * 3.14159 * raio;
  printf("O comprimento da circunferência é: %.2f\n", comprimento);

  return 0;
}

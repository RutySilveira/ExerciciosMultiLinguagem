#include <stdio.h>

int main()
{
  int idade, quantidadeMais50 = 0, quantidadeEntre10e20 = 0, quantidadePesoMenor40 = 0;
  float altura, peso, somaAlturas = 0.0, mediaAlturas, porcentagemPesoMenor40;

  for (int i = 1; i <= 25; i++)
  {
    printf("Digite a idade da pessoa %d: ", i);
    scanf("%d", &idade);

    printf("Digite a altura da pessoa %d (em metros): ", i);
    scanf("%f", &altura);

    printf("Digite o peso da pessoa %d (em quilos): ", i);
    scanf("%f", &peso);

    if (idade > 50)
    {
      quantidadeMais50++;
    }

    if (idade >= 10 && idade <= 20)
    {
      somaAlturas += altura;
      quantidadeEntre10e20++;
    }

    if (peso < 40)
    {
      quantidadePesoMenor40++;
    }
  }

  if (quantidadeEntre10e20 > 0)
  {
    mediaAlturas = somaAlturas / quantidadeEntre10e20;
  }
  else
  {
    mediaAlturas = 0.0;
  }

  porcentagemPesoMenor40 = (float)quantidadePesoMenor40 / 25 * 100;

  printf("\nQuantidade de pessoas com idade superior a 50 anos: %d\n", quantidadeMais50);
  printf("Media das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", mediaAlturas);
  printf("Porcentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", porcentagemPesoMenor40);

  return 0;
}

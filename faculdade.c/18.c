#include <stdio.h>
#include <math.h>

int main()
{
  float numero;

  do
  {
    printf("Digite um valor: ");
    scanf("%f", &numero);

    if (numero >= 0)
    {
      printf("Raiz quadrada de %.2f: %.2f\n", numero, sqrt(numero));
    }
    else
    {
      printf("Valor negativo. Encerrando o programa.\n");
    }
  } while (numero >= 0);

  return 0;
}

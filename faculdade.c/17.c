#include <stdio.h>

int main()
{
  int contador = 1;

  do
  {
    printf("%d\n", contador);
    contador++;
  } while (contador <= 1000);

  return 0;
}

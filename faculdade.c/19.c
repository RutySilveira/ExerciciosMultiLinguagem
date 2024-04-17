#include <stdio.h>

int main()
{
  int contador = 1;

  printf("Os 100 primeiros números pares são:\n");
  do{
    if (contador % 2 == 0){
      printf("%d\n", contador);
    }
    contador++;
  } while (contador <= 200);

  return 0;
}

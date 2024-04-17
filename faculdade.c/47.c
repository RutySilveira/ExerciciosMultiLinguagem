#include <stdio.h>

int main()
{
  int n = 10; 
  int primeiro = 0, segundo = 1, proximo;

  printf("Os primeiros %d numeros de Fibonacci sao:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("%d, ", primeiro);
    proximo = primeiro + segundo;
    primeiro = segundo;
    segundo = proximo;
  }

  printf("\n");

  return 0;
}

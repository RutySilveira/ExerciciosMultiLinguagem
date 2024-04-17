#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, num;
  float result;
  printf("Digite um numero qualquer: \n\n");
  scanf("%d", &num);

  for (i = 0; i < 10; i++)
    result = rand() * num * 0.8;

  printf("\n%f", result);
  return 0;
}
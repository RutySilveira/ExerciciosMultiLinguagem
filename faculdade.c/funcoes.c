#include <stdio.h>

int min(int num1, int num2);

int main()
{
  int num1, num2, result;

  printf("Number 1: ");
  scanf("%d", &num1);
  printf("Number 2: ");
  scanf("%d", &num2);

  result = min(num1, num2); // chamada da função

  printf("\n %d", result);

  return 0;
}

int min(int num1, int num2) // funcao criada
{
  int result = 0;

  if (num1 < num2)
  {
    result = num1;
  }
  else
  {
    result = num2;
  }
  return result;
}
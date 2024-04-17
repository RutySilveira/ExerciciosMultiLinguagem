#include <stdio.h>

int main()
{

  float num1, num2;
  char op;
  float result;

  printf("Number 1: ");
  scanf("%f", &num1);
  printf("Number 2: ");
  scanf("%f", &num2);

  printf("OP: ");
  scanf("%s", &op);

  if (op = '+')
  {
    result = num1 + num2;
  }
  if (op == '-')
  {
    result = num1 - num2;
  }
  if (op == '*')
  {
    result = num1 * num2;
  }
  if (op == '/')
  {
    result = num1 / num2;
  }

  printf("%f", result);

  return 0;
}
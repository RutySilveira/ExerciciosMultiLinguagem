#include <stdio.h>

int um_de_dois(int num1, int num2);

int main(void)
{
  int a = 100;
  int b = 20;
  int ret_num;

  ret_num = um_de_dois(a, b);
  printf("O valor c: %d\n", ret_num);
  return 0;
}

int um_de_dois(int num1, int num2)
{
  int result;
  if (num1 > num2)
    result = num1;
  else
    result = num2;
  return result;
}
#include <stdio.h>

int main()
{

  int arr[10]; // criação do array.

  for (int i = 0; i < 10; i++) // populando o array.
  {
    arr[i] = (i + 1) * 2;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", arr[i]); // printando cada posição do array.
  }

  return 0;
}
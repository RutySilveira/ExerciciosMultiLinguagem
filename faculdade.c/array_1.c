#include <stdio.h>

int main()
{

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // criaçaõ de array, e definicao dos valores das posicoes.

  arr[4] = arr[4] * 5; // Altera-se o valor da posição 4, com uma operação de multiplicação.

  printf("%d", arr[4]); // printa o valor da posicao 4 do array.

  return 0;
}
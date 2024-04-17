// Programa que ira achar a media de uma colecao de dados, com base no que o usuario informar.

#include <stdio.h>

int main()
{

  int size;
  int arr[5];
  float sum;
  float average;

  printf("Size of arr: "); // definicao do tamanho do array.
  scanf("%d", &size);

  if (size > 0 && size <= 5)
  {
    for (int i = 0; i < size; i++)
    {
      printf("Enter a number: ");
      scanf("%d", &arr[i]); // Definicao dos numeros que entrarão no array, e que serao calculados p/ a média.

      sum = sum + arr[i]; // soma cada item.
    }
    average = sum / size;  // calculo da media.
    printf("%f", average); // print da media.
  }
  else
  {
    printf("Invalid size array");
  }
}
#include <stdio.h>

int main()
{
  char str[50];

  puts("Insert: ");
  gets(str); // O gets irá receber os dados do array
  puts(str); // O puts irá exibir o array

  return 0;
}
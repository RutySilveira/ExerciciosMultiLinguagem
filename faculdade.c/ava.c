#include <stdio.h>
#include <conio.h>

void digitatexto(char texto[], int tamanho);

int main()
{
  char nome[10];
  int t;

  printf("Digite um nome: ");
  digitatexto(nome, 5);

  printf("\nNome digitado: %s", nome);
  return 0;
}

void digitatexto(char texto[], int tamanho)
{
  int i;

  for (i = 0; i < tamanho; i++)
  {
    texto[i] = getch();
    printf("%c", texto[i]);
    if (texto[i] == 13)
    {
      texto[i] = 0;
      printf("\n");
      return;
    }
  }
  printf("\n");
}
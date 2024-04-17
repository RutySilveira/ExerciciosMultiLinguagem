#include <stdio.h>

int main()
{

  int counter;

  printf("Insert counter times; ");
  scanf("%d", &counter);

  for (int con = 0; con < counter; con++) // Inicialização de variavel de controle, condição, incremento ou decremento.
  {
    printf("Value: %d", con);
  }
  return 0;
}

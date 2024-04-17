#include <stdio.h>

int main()
{
  int quadrado(int a) // Funcao comr retorno e parametro
  {
    return (a * a);
  }
  int main()
  {
    int n1, n2;
    printf("Entre com o numero: ");
    scanf("%d", &n1);
    n2 = quadrado(n1);
    printf("Quadrado = %d", n2);
  }
}
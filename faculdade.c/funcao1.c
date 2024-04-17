// Funcao com retorno e sem parametro, entao ja faco o scanf dentro da funcao.

#include <stdio.h>

int quadrado(){
  int a;
  scanf("%d", &a);
  return (a * a);
}
int main(){
  int n1;
  n1 = quadrado();
  printf("Quadrado = %d", n1);
}
#include <stdio.h>

int main()
{

  int meses, joao, luiz, i;
  joao = 3200;
  luiz = 50800;
  meses = 0;
  i = 0;

  while (joao <= luiz)
  {
    i = i + 3200;
    meses = meses + 1;
  }
  printf("%d", meses);
  return 0;
}
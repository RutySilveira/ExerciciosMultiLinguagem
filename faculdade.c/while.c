#include <stdio.h>

int main()
{

  int counter;
  int con = 0;

  printf("Insert counter times; ");
  scanf("%d", &counter);

  while (con < counter)
  {
    printf("value: %d", con);
    con++;
  }
  return 0;
}
#include <stdio.h>

int main()
{

  int counter;
  int con = 0;

  printf("Insert counter times: ");
  scanf("%d", &counter);

  do
  {
    printf("Value %d: ", con);
    con++;
  } while (con < counter);

  return 0;
}
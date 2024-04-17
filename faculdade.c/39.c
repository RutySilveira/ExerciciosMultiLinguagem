#include <stdio.h>

int main()
{
  int i;
  i = 1;

  do
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
    i += 1;
  } while (i <= 200);
  return 0;
}
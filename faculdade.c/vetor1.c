#include <stdio.h>

int main()
{

  int A[10], i;
  // preeenchimento do vetor
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &A[i]);
  }
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", A[i]);
  }
  return 0;
}
#include <stdio.h>

int main()
{

  int arr[2][2];

  printf("Enter number (4): ");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d \n", arr[i][j]);
    }
  }
  return 0;
}
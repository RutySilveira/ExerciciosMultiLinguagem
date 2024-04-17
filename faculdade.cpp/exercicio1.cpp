#include <iostream>

using namespace std;

int main()
{
  int num = 10;

  if (num > 3)
  {
    if (num < 10)
    {
      cout << "numero maior do que 5 e menor ou igual a 10";
    }
    else
    {
      cout << "numero maior do que 10";
    }
  }
  else
  {
    cout << "numero menor do que 5";
  }
  return 0;
}
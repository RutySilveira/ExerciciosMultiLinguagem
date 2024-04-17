#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n = 1;

  while (n <= 100)
  {
    if (n % 2 != 0)
    {
      n++;
      continue;
    }
    cout << n << endl;
    n++;
  }
  return 0;
}
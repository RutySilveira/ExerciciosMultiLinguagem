#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int num = 8;

  switch (num)
  {
  case 9:
    cout << "numero 9";
    break;
  case 10:
    cout << "numero 10";
    break;
  case 11:
    cout << "numero 11";
    break;
  default:
    cout << "numero nao encontrado";
  }
  return 0;
}
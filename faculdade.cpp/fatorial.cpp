/*
    Calculo do fatorial
    0! = 1! = 1
    3! = 3 * 2 * 1 = 6
    4! = 4 * 3 * 2 * 1 = 24
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int num, fat = 1;

  cout << "Digite um número: ";
  cin >> num;

  for (int i = 1; i < num; i++)
  {
    fat = fat * (i + 1);
  }
  cout << "Fatorial: " << fat << endl;
  return 0;
}
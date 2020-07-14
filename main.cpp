/*  Fibbonaci  */
#include <iostream>

using namespace std;

unsigned long long a = 0, b = 1;
int ile;

int main()
{
  cout << "Witaj w programie\n";
  cout << "Podaj ile liczb: ";  cin >> ile;
  cout << 0 << "\n\n";
  cout << 1 << "\n";
  for (int i = 0; i < ile - 2; i++)
  {
    unsigned long long fib;
    fib = a + b;
    cout  << "\n" << fib << "\n";
    a = b;
    b = fib;
  }
  return 0;
}

#include <iostream>
using namespace std;

double fib(int n)
{
  if(n == 1 || n == 2)
    return 1;

  double fib1 = 1, fib2 = 1;
  double fib3 = 0;

  for(int i = 2; i < n; i++)
  {
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;
  }
  return fib3;
}

int main() {
  int n = 8;
  cout << "費波那契數列的第 " << n << " 項為：" << fib(n) << endl;
  return 0;
}

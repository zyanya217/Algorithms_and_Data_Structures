#include <iostream>
using namespace std;

int fib(int n)
{
  if(n == 1 || n == 2)
    return 1;
  else
    return (fib(n-1) + fib(n-2));
}

int main() {
  int n = 8 ;
  cout << "費波那契數列的第 " << n << " 項為：" << fib(n) << endl;
  return 0;
}

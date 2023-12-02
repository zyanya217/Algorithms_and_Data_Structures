#include <iostream>
using namespace std;

int Fib(int n) {
     if (n <= 1)
        return n;
    else
        return Fib(n - 1) + Fib(n - 2);
}

void printFib(int limit) {
    for (int i = 0; Fib(i) < limit; ++i)
        cout << Fib(i) << " ";
}

int main() {
    int limit = 1000;
    printFib(limit);
    return 0;
}

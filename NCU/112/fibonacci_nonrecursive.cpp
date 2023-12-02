#include <iostream>
using namespace std;

void Fib(int limit) {
    int fib1 = 0, fib2 = 1, nextFib;
    while (fib1 < limit) {
        cout << fib1 << " ";
        nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }
}

int main() {
    int limit = 1000;
    Fib(limit);
    return 0;
}

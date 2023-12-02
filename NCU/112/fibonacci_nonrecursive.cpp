#include <iostream>

void printFib(int limit) {
    int fib1 = 0, fib2 = 1, nextFib;
    while (fib1 < limit) {
        std::cout << fib1 << " ";
        nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }
}

int main() {
    int limit = 1000;
    printFib(limit);
    return 0;
}

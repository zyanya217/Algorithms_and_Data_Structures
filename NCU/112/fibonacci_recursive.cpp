#include <iostream>

int Fibonacci(int n) {
    return (n <= 1) ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

void printFibonacci(int limit) {
    for (int i = 0; Fibonacci(i) < limit; ++i)
        std::cout << Fibonacci(i) << " ";
}

int main() {
    int limit = 1000;
    printFibonacci(limit);
    return 0;
}

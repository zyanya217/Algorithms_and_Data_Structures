#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
  
    if (n <= 1)  return false;
    if (i * i > n) return true; // 已經檢查完了所有可能的因數
    if (n % i == 0) return false; // 找到因數，n不是質數
  
    return isPrime(n, i + 1);
}
int main() {
    int n = 23;
    cout << (isPrime(n) ? "true" : "false");
    return 0;
}

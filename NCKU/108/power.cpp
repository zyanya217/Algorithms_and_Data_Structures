#include <iostream>
using namespace std;

// 定義計算 x^n 的快速指數算法
int myPow(int x, int n) {
    int result = 1;
  
    while (n) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
    
    int x, n;
    cout << "Enter the base and exponent (x^n): ";
    cin >> x >> n; // 接收用戶輸入的底數 x 和指數 n

    cout << x << "^" << n << " = " << myPow(x, n) << endl; // 計算並輸出結果

    return 0;
}

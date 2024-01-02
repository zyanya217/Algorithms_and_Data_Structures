#include <iostream>
using namespace std;

bool isPowerOfTwoRecursive(int n) {
  
    if (n <= 0) return false;  // 小於等於0的數不是2的次方數
    if (n == 1) return true;  // 如果n等於1，表示是2的次方數
  
    return (n % 2 == 0) && isPowerOfTwoRecursive(n / 2);
}

int main() {
    // 測試
    int num;
    cout << "請輸入一個整數: ";
    cin >> num;
    cout << num << (isPowerOfTwo(num) ? "是" : "不是") << "2的次方數" << endl;
  
    return 0;
}

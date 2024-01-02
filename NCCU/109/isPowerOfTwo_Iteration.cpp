#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0)  return false;  // 小於等於0的數不是2的次方數

    while (n > 1) {
        if (n % 2 != 0)  return false;  // 如果餘數不為0，表示不是2的次方數
        n /= 2;
    }
    return true;  // 如果跳出迴圈，表示是2的次方數
}

int main() {
    // 測試
    int num;
    cout << "請輸入一個整數: ";
    cin >> num;
    cout << num << (isPowerOfTwo(num) ? "是" : "不是") << "2的次方數" << endl;
  
    return 0;
}

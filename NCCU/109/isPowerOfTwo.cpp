#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0; 
}
// 使用位元運算(AND)判斷是否為2的次方數 //ex: n=8  100 ADN 011 = 0
// 因為使用位元運算符（例如 & 和 -）時，實際上是在處理數字的二進位表示

int main() {
    // 測試
    int num;
    cout << "請輸入一個整數: ";
    cin >> num;
    cout << num << (isPowerOfTwo(num) ? "是" : "不是") << "2的次方數" << endl;
  
    return 0;
}

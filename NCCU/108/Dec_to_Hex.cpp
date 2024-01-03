#include <iostream>
#include <sstream>
using namespace std;

string Dec_to_Hex(int n) {
    string b = "0x"; // 十六進位的前綴 "0x"
    char arr[] = "0123456789ABCDEF"; // 十六進位數字的字符表示
    char hex[5]; // 存放十六進位結果
    int i = 0;   // 追蹤 hex 陣列內元素的索引

    // 將十進位數轉換為十六進位
    while (n)
    {
        hex[i++] = arr[n % 16]; // 取得餘數對應的十六進位數字，並存入 hex 陣列
        n /= 16; // 取得除以 16 的結果，繼續迭代
    }

    // 將 hex 陣列中的十六進位數字加到結果字串的尾部
    for (int j = i - 1; j >= 0; --j)
        b += hex[j];

    return b; // 返回最終的十六進位表示
}

//測試
int main() {
    int num;
    cout << "輸入一個整數：";
    cin >> num;
    cout << "十進位制數 " << num << " 轉換成十六進位制數是：" << Dec_to_Hex(num) << endl;
    return 0;
}

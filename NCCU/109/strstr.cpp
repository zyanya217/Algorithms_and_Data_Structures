#include <iostream>
#include <string>
using namespace std;

int strstr(const string& s, const string& t) {
   
    if (s.empty()) return 0;  // 若 s 為空字串，回傳 0

    // 使用兩層迴圈比對子字串位置
    for (int i = 0; i <= t.length() - s.length(); ++i) {
        bool match = true;
        for (int j = 0; j < s.length(); ++j) {
            if (t[i + j] != s[j]) {
                match = false; // 沒通過試煉就把match改成false
                break; // 並彈出內層迴圈，回外層迴圈繼續找t字串中的下個字元
            }
        }
        if (match)  return i; // 順利通過試煉，沒被彈出
    }
    return -1;  // 若 s 不為 t 的子字串，回傳 -1
}


int main() {
  
    // 測試  
    string s1 = "abc";
    string t1 = "abcdefg";
    cout << strstr(s1, t1) << endl;  // 0

    string s2 = "xyz";
    string t2 = "abcdefg";
    cout << strstr(s2, t2) << endl;  // -1

    string s3 = "cd";
    string t3 = "abcdefg";
    cout << strstr(s3, t3) << endl;  // 2

    return 0;
}

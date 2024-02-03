#include <iostream>
#include <cstring>
using namespace std;

char* ReverseStr(char *str)
{
    int len = strlen(str); // 取得字串的長度

    // 建立一個新的字串來存放反轉後的結果，需要多一個格子(加上終止符號)
    char* result = new char[len + 1]; 

    char* p = str + len - 1;  // 使用指標 p 指向字串的最後一個字元

    for (int i = 0; i < len; i++)
    {
        result[i] = *p;
        p--;
    }
    result[len] = '\0'; // 在反轉後的字串末尾加上終止符號

    return result;  // 返回反轉後的結果
}

int main()
{
    char str[] = "abc"; 
    char* reversedStr = ReverseString(str);
    cout << "原始字串: " << str << endl;
    cout << "反轉字串: " << reversedStr << endl;
  
    delete[] reversedStr;   // 釋放動態分配的內存
    return 0;
}

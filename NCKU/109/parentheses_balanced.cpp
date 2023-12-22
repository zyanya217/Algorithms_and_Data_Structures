#include <iostream>
#include <stack>
using namespace std;

bool isValidPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool areBalanced(const string& expression) {
    stack<char> brackets;

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            brackets.push(ch); } 
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (brackets.empty() || !isValidPair(brackets.top(), ch)) {
                return false;  // 括號不匹配
            }
            brackets.pop();
        }
    }

    return brackets.empty();  // 檢查是否有未匹配的開啟括號
}

int main() {
    string expression = "{[2 x (a + b)]- c} x 3(d + e)";
    
    if (areBalanced(expression)) {
        cout << "括號平衡\n";
    } else {
        cout << "括號不平衡\n";
    }
    return 0;
}

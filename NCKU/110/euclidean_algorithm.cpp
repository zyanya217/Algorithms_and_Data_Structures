#include <iostream>
using namespace std;

int euclidean(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 48;
    int num2 = 18;
    int result = euclidean(num1, num2);

    cout << result << endl;

    return 0;
}

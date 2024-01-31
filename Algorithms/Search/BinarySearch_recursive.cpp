#include <iostream>
using namespace std;

bool binsearch(int S[], int x, int low, int high) {
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        switch (x == S[mid] ? '=' : (x > S[mid] ? '>' : '<')) {
            case '=':
                return true;  // 找到目標值
            case '>':
                low = mid + 1;  // 在右半部分搜尋
                break;
            case '<':
                high = mid - 1;  // 在左半部分搜尋
                break;
        }
    }
    return false;  // 如果沒找到目標值
}

int main() {
    int arr[] = {1, 2, 5, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    if (binsearch(arr, target, 0, size - 1)) {
        cout << target << " 在陣列中" << endl;
    } else {
        cout << target << " 不在陣列中" << endl;
    }
    return 0;
}

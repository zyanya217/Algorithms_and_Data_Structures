#include <iostream>
using namespace std;

bool binsearch(int S[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (x == S[mid]) {
            return true;  // 找到目標值
        } else if (x < S[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;  // 如果沒找到目標值
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    if (binsearch(arr, size, target)) {
        cout << target << " 在陣列中。" << endl;
    } else {
        cout << target << " 不在陣列中。" << endl;
    }
    return 0;
}

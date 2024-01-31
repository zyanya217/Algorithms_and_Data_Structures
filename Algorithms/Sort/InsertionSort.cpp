#include <iostream>
using namespace std;

typedef int index;
typedef int keytype; 

void InsertionSort(int n, keytype S[]) {
    index i, j;
    keytype x;

    for (i = 1; i <= n; i++) {
        x = S[i];
        j = i - 1;
        while (j >= 0 && S[j] > x) {
            S[j + 1] = S[j];
            j--;
        }
        S[j + 1] = x;
    }
}

int main() {
    keytype arr[] = {5, 2, 9, 1, 5, 6};
    index size = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(size - 1, arr);
    cout << "排序後的陣列: ";
    for (index i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

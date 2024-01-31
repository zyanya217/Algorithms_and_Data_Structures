#include <iostream>
using namespace std;

void SelectionSort(int n, int S[]) {
    int i, j, smallest;

    for (i = 0; i < n - 1; i++) {
        smallest = i;

        for (j = i + 1; j <= n; j++) {
            if (S[j] < S[smallest]) {
                smallest = j;
            }
        }
        swap(S[i], S[smallest]);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(size, arr);
    cout << "排序後的陣列: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

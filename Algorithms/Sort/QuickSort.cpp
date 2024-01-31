#include <iostream>
#include <algorithm>  // 包含 swap 函數
using namespace std;

// m : array 第 0 個位子
// n : array 倒數第二個位子
// n+1 : array 最後一個位子  list[n+1] = infinity

void QuickSort(int list[], int m, int n) {
    if (m < n) {
        int i = m, j = n + 1;
        int pivot = list[m];

        do {
            do {
                i++;
            } while (list[i] < pivot);

            do {
                j--;
            } while (list[j] > pivot);

            if (i < j)
                swap(list[i], list[j]);
        } while (i < j);

        swap(list[m], list[j]);

        QuickSort(list, m, j - 1);
        QuickSort(list, j + 1, n);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, size - 2);
    cout << "排序後的陣列: ";
    for (int i = 0; i < size - 1; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

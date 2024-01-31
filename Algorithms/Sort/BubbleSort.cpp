#include <iostream>
using namespace std;

void BubbleSort(int S[], int n) {
    int i, j, f;

    for (i = 0; i < n - 1; i++) {
        f = 0;
        for (j = 0; j < n - 1; j++) {
            if (S[j + 1] < S[j]) {
                swap(S[j], S[j + 1]);  // 交換位置
                f = 1;
            }
        }
        if (f == 0) 
            break;  // 如果內循環沒有進行交換，表示數列已經排序完成，提前退出外循環
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    cout << "排序後的陣列: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

#include <stdio.h>

// C語言沒內建的swap函數
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 函數：分區（Partitioning），返回 pivot 的最終位置
int partition(int arr[], int low, int high) {
    // 選擇第一個元素作為 pivot
    int pivot = arr[low];
    int i = low + 1; // 指向左分區的結尾

    // 遍歷陣列
    for (int j = low + 1; j <= high; j++) {
        // 如果當前元素小於等於 pivot，交換元素位置
        if (arr[j] <= pivot) {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }

    // 將 pivot 放到正確的位置
    swap(&arr[low], &arr[i - 1]);

    // 返回 pivot 的最終位置
    return i - 1;
}

// 函數：快速排序
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 分區，獲取 pivot 的最終位置
        int pivotIndex = partition(arr, low, high);

        // 遞歸對左右子陣列進行排序
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// 函數：打印陣列
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {75, 40, 61, 23, 54, 12, 98, 86};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 執行快速排序
    quickSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}

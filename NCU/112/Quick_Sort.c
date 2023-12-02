#include <stdio.h>

// C語言沒內建swap函數
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 函數：分區（Partitioning），返回 pivot 的最終位置
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;  // 指向左分區的結尾
    int j = high;     // 指向右分區的結尾

    while (i <= j) {
        // 向右找到第一個大於 pivot 的元素
        while (i <= j && arr[i] <= pivot) 
            i++;

        // 向左找到第一個小於 pivot 的元素
        while (i <= j && arr[j] > pivot) 
            j--;

        // 如果 i 和 j 還沒相遇，則交換它們指向的元素
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    // 將 pivot 放到正確的位置
    swap(&arr[low], &arr[j]);

    // 返回 pivot 的最終位置
    return j;
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


int main() {
    int arr[] = {75, 40, 61, 23, 54, 12, 98, 86};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 執行快速排序
    quickSort(arr, 0, size - 1);

    // 打印排序後的陣列
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

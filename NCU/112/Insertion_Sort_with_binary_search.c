#include <stdio.h>

// 二分搜尋函數: 返回應插入的位置
int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

// 插入排序函數: 使用二分搜尋找到正確位置後插入
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // 使用二分搜尋找到應該插入的位置
        int index = binarySearch(arr, key, 0, j);

        // 將大於 key 的元素向右移動
        while (j >= index) {
            arr[j + 1] = arr[j];
            j--;
        }
        // 在正確位置插入 key
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {40, 28, 56, 15, 63, 74, 98, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

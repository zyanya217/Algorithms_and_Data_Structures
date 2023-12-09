#include <stdio.h>

int kthSmallest(int arr[], int n, int k) {
    // 用選擇排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // 如果找到比當前數字還小的值就交換
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // 第k小的元素現在位於array[k-1]
    return arr[k - 1];
}

int main() {
    int n, k;
    // 假設已知一陣列
    n = 6; //陣列大小
    int arr[] = {12, 3, 5, 7, 19, 0}; 

    k = 3; // 假設要找第3小的元素
    int result = kthSmallest(arr, n, k);  
    printf("第 %d 小的元素是：%d\n", k, result);

    return 0;
}

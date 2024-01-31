#include <iostream>
using namespace std;

// S 陣列 : 將要被排序，用mid切開分成左右兩部分
// U 陣列 : 臨時陣列，用來裝i與j比較後排序的結果

void merge(int low, int mid, int high, int S[]) {
    int i, j, k;
    int U[high - low + 1];
    i = low; j = mid + 1; k = 0;
    
// S 陣列中 i在左半部從low到mid，j在右半部從mid+1到high
// U 陣列中 k從low開始跑，陸續i與j比較結果依序填入
    
    while (i <= mid && j <= high) {
        if (S[i] <= S[j]) {
            U[k] = S[i];
            i++;
        } else {
            U[k] = S[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        U[k] = S[i];
        i++;
        k++;
    }
    while (j <= high) {
        U[k] = S[j];
        j++;
        k++;
    }
    for (int x = 0; x < k; x++) {
        S[low + x] = U[x];
    }
}

void mergeSort(int low, int high, int S[]) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(low, mid, S);      // 左
        mergeSort(mid + 1, high, S); // 右
        merge(low, mid, high, S);    // 合併
    } 
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(0, size - 1, arr);
    cout << "排序後的陣列: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

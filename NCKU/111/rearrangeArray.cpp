#include <iostream>
using namespace std;

// 重排陣列函數 
//答案紙上寫這個方法就好，main()是為了測試是否正常
void rearrange(int arr[], int n) {
  int j = 0; 
  // 從頭遍歷陣列
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {  // 當前元素若小於0 
      if (i != j)  
        swap(arr[i], arr[j]); // 將其值交換到j指標位置 
      j++; // j向後移動,指向下一個給負數放的位置
    }
  }  
}

int main() {
  int arr[] = {1, -2, 0, -3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);// 計算陣列長度 
  
  rearrange(arr, n); // 調用重排函數
  
  //印出陣列
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";   }
  cout << endl;

  return 0; 
}

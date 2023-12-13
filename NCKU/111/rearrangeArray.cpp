void rearrangeArray(vector<int>& arr) {
    int n = arr.size();
    int low = 0;         // 低指標，用於處理負數部分
    int high = n - 1;     // 高指標，用於處理正數部分
    int i = 0;            // 遍歷指標

    // 遍歷整個陣列
    while (i <= high) {
        if (arr[i] < 0) {
            // 如果當前元素是負數，交換到低指標位置，然後移動低指標和遍歷指標
            swap(arr[i], arr[low]);
            low++;
            i++;
        } else if (arr[i] == 0) {
            // 如果當前元素是零，只移動遍歷指標
            i++;
        } else {
            // 如果當前元素是正數，交換到高指標位置，然後移動高指標
            swap(arr[i], arr[high]);
            high--;
        }
    }
}

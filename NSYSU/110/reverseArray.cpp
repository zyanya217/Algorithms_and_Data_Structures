#include <iostream>
#include <algorithm>

using namespace std;

void reverseArray(int arr[], int length) {
    for (int i = 0; i < length / 2; ++i) {
        swap(arr[i], arr[length - i - 1]);
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    reverseArray(myArray, arraySize);

    cout << "反轉後的陣列:";
    for (int i = 0; i < arraySize; ++i) {
        cout << " " << myArray[i];
    }
    cout << endl;

    return 0;
}

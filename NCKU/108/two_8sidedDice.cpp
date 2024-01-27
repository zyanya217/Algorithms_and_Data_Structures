#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 8;
    int freq[size + 1][size + 1] = {}; 
    
    srand(time(0)); // 使用系统時間設置隨機數生成器的種子

    // 擲骰子並記錄次數
    for (int roll = 1; roll <= 100 ; roll++) {
        int dice1 = 1 + rand() % size;
        int dice2 = 1 + rand() % size;
        freq[dice1][dice2]++;
    }

    // 顯示結果
    for (int face1 = 1; face1 <= size; face1++) {
        for (int face2 = 1; face2 <= size; face2++) {
            cout << setw(4) << freq[face1][face2];
        }
        cout << endl;
    }
    return 0;
}

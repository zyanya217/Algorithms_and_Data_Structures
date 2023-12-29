#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int sides = 8;
    int results[sides + 1][sides + 1] = {}; // 陣列大小為 9x9，從1開始

    // 擲骰子並記錄次數
    for (int roll = 1; roll <= 100 ; roll++) {
        int dice1 = 1 + rand() % sides;
        int dice2 = 1 + rand() % sides;
        results[dice1][dice2]++;
    }

    // 顯示結果
    for (int face1 = 1; face1 <= sides; face1++) {
        for (int face2 = 1; face2 <= sides; face2++) {
            cout << setw(4) << results[face1][face2];
        }
        cout << endl;
    }
    return 0;
}

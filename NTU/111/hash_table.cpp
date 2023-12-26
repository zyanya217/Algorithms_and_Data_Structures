#include<iostream>
using namespace std;

/* 題目給的: */
class ChainStudentNode {
private:
    int studentID;
    string name;
    string dept;
    ChainStudentNode* next;
    friend class StudentHashTable;
};

class StudentHashTable {
public:
    void insertStudent(int sID, const string& sName, const string& sDept);
    string retrieveName(int sID);

protected:
    int hashIndex(int sID);

private:
    static const int HashTableSize = 101;
    ChainStudentNode* table[HashTableSize];
};
/////////////////////////////////////////////////////////////////////////////////////////

/* 第一題 */
void StudentHashTable::insertStudent(int sID, const string& sName, const string& sDept) {
 
    int index = hashIndex(sID);

    // 創造一個新學生 node
    ChainStudentNode* newStudent = new ChainStudentNode();
    newStudent->studentID = sID;
    newStudent->name = sName;
    newStudent->dept = sDept;
    newStudent->next = nullptr;

    // 插入到 hash table 的特定位置
    if (table[index] == nullptr) {
        // 如果位置是空的，直接插入新學生節點
        table[index] = newStudent;
    } else {
        // 如果位置已經有學生，將新學生節點插入到鏈表的頭部
        newStudent->next = table[index];
        table[index] = newStudent;
    }
}

/* 第二題 */
string StudentHashTable::retrieveName(int sID) {
    int index = hashIndex(sID); // 先找學生 ID 在 hash table 中的位置

    // 在該位置的鏈結中尋找學生 ID
    ChainStudentNode* current = table[index];
    while (current != nullptr) {
        // 如果學生 ID 匹配，返回學生的名字
        if (current->studentID == sID) {
            return current->name;
        }
        current = current->next;
    }
    return ""; // 如果未找到匹配的學生，返回空字符串 //不可回傳NULL。因為NULL是一個指標型的空值，這個Function的返回型態是string
}

/* 第三題 */
int StudentHashTable::hashIndex(int sID) {
    sID = (sID % 1000) % HashTableSize;
    return sID;
}

// 測試用
int main() {
    StudentHashTable a;

    a.insertStudent(20, "danny", "MEM");
    a.insertStudent(121, "anita", "BM");
    cout << a.retrieveName(121);

    return 0;
}

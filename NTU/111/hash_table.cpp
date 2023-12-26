/* 第一題 */
 void insertStudent(int sID, const string& sName, const string& sDept) {
   
        // 取ID最後三碼(因為ID可能很長)，再與hash table的大小取mod
        int key = (sID % 1000) % HASH_TABLE_SIZE;    
        ChainStudentNode* newStudent = new ChainStudentNode(sID, sName, sDept);  // 創建新的學生節點

        // 插入到hash table的特定位置
        if (table[key] == nullptr) {
            // 如果位置是空的，直接插入新學生節點
            table[key] = newStudent;
        } else {
            // 如果位置已經有學生，將新學生節點插入到鏈表的頭部
            newStudent->next = table[key];
            table[key] = newStudent;
        }
 }

/* 第二題 */
string retrieveName(int sID) {
    // 先找學生ID在hash table中的位置
    int key = (sID % 1000) % HASH_TABLE_SIZE;

    // 在該位置的鏈結中尋找學生ID
    ChainStudentNode* current = table[key];
    while (current != nullptr) {
        // 如果學生ID匹配，返回學生的名字
        if (current->studentID == sID) {
            return current->name;
        }
        current = current->next;
    }
    return NULL; // 如果未找到匹配的學生，返回空字符串
}

/* 第三題 */
int hashIndex(int sID) {
    int key = sID % 1000;
    return key;
}

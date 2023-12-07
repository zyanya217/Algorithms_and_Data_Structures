// 在單向鏈表的Head插入節點
struct Node* insertAtHead(struct Node* head, int value) {
    // 創建一個新節點
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // 設置新節點的數據和下一個指針
    newNode->data = value;
    newNode->next = head;

    // 更新Head指向新節點
    return newNode;
}


// 在雙向鏈表的Head插入節點
struct Node* insertAtHead(struct Node* head, int value) {
    // 創建一個新節點
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // 設置新節點的數據、下一個指針和上一個指針
    newNode->data = value;
    newNode->next = head;
    newNode->prev = NULL;

    // 如果Head存在，則更新頭的上一個指針
    if (head) {
        head->prev = newNode;
    }

    // 更新Head指向新節點
    return newNode;
}


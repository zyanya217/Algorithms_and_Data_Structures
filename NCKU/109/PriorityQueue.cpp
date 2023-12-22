#include <iostream>
// using namespace std; //違反題目的"The use of STL classes is prohibited."

class PriorityQueue {
private:
    // 定義一個struct 表示隊列中的每個元素
    struct QueueNode {
        int data;
        int priority;
        QueueNode* next;

        // 結構的構造函數，用於初始化節點數據和優先級
        QueueNode(int d, int p) : data(d), priority(p), next(nullptr) {}
    };

    // 指向優先級隊列前端的指針
    QueueNode* front;

public:
    // constructor: 初始化隊列為空
    PriorityQueue() : front(nullptr) {}

    // 方法: 用於按給定優先級對元素進行排隊
    void enqueue(int data, int priority) {
        QueueNode* newNode = new QueueNode(data, priority);

        // 如果隊列為空或新元素具有更高的優先級，則插入在前面
        if (front == nullptr || priority > front->priority) {
            newNode->next = front;
            front = newNode;
        } else {
            // 遍歷隊列以找到插入新元素的正確位置
            QueueNode* temp = front;
            while (temp->next != nullptr && priority <= temp->next->priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // 方法: 用於彈出具有最高優先級的元素
    int dequeue() {
        // 檢查隊列是否為空
        if (front == nullptr) {
            std::cerr << "Queue is empty. Cannot dequeue.\n";
            return -1; // 返回一個標誌值表示空隊列
        }

        // 取得隊列頂端元素的數據值
        QueueNode* temp = front;
        int data = temp->data;

        // 移動頂端指針到下一個元素，並刪除原來的頂端元素
        front = front->next;
        delete temp;

        // 返回彈出的元素的數據值
        return data;
    }
};


//以下為示範
int main() {
    PriorityQueue pq;

    // 將元素按照不同的優先級加入隊列
    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);

    // 依序彈出元素，並輸出其數據值
    std::cout << "Dequeue: " << pq.dequeue() << std::endl;
    std::cout << "Dequeue: " << pq.dequeue() << std::endl;
    std::cout << "Dequeue: " << pq.dequeue() << std::endl;

    return 0;
}

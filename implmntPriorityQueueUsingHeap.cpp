#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
    vector<int> heap;

    void heapifyUp(int idx) {
        while (idx > 0) {
            int parent = (idx - 1) / 2;
            if (heap[parent] < heap[idx]) {
                swap(heap[parent], heap[idx]);
                idx = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int idx) {
        int n = heap.size();
        while (idx < n) {
            int left = 2 * idx + 1;
            int right = 2 * idx + 2;
            int largest = idx;

            if (left < n && heap[left] > heap[largest]) largest = left;
            if (right < n && heap[right] > heap[largest]) largest = right;

            if (largest != idx) {
                swap(heap[idx], heap[largest]);
                idx = largest;
            } else {
                break;
            }
        }
    }

public:
    void push(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void pop() {
        if (heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    int top() {
        if (heap.empty()) throw out_of_range("PriorityQueue is empty");
        return heap[0];
    }

    bool empty() {
        return heap.empty();
    }

    int size() {
        return heap.size();
    }
};

int main() {
    PriorityQueue pq;
    pq.push(10);
    pq.push(4);
    pq.push(15);
    pq.push(20);

    cout << "Priority Queue elements (max at top): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
// Hashing with Linear Probing
#include <iostream>
#include <vector>
using namespace std;

class HashTableLinearProbing {
    int size;
    vector<int> table;
public:
    HashTableLinearProbing(int s) : size(s), table(s, -1) {}
    int hash(int key) {
        return key % size;
    }
    void insert(int key) {
        int idx = hash(key);
        int start = idx;
        while (table[idx] != -1) {
            idx = (idx + 1) % size;
            if (idx == start) return; // Table is full
        }
        table[idx] = key;
    }
    bool search(int key) {
        int idx = hash(key);
        int start = idx;
        while (table[idx] != -1) {
            if (table[idx] == key) return true;
            idx = (idx + 1) % size;
            if (idx == start) break;
        }
        return false;
    }
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            if (table[i] != -1) cout << table[i];
            cout << endl;
        }
    }
};
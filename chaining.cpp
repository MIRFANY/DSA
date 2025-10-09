// Hashing with Chaining
#include <iostream>
#include <list>
using namespace std;

class HashTableChaining {
    int size;
    list<int> *table;
public:
    HashTableChaining(int s) {
        size = s;
        table = new list<int>[size];
    }
    int hash(int key) {
        return key % size;
    }
    void insert(int key) {
        int idx = hash(key);
        table[idx].push_back(key);
    }
    bool search(int key) {
        int idx = hash(key);
        for (int x : table[idx]) {
            if (x == key) return true;
        }
        return false;
    }
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            for (int x : table[i]) cout << x << " ";
            cout << endl;
        }
    }
};
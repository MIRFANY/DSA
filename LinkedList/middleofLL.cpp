#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data=d;
        next = nullptr;
    }

};

void middle(Node* &head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast!= nullptr){
        fast= fast->next;
        if(fast!=nullptr){
            fast= fast->next;
        }

        slow= slow->next;
    }

}
int main(){
    Node* node1= new Node(23);
    
}
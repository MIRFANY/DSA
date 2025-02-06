#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;


    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
// floyds cycle detection algorithm
bool detectLoop(Node* head){
    // Node* node1= new Node();
    Node* slow= head;
    Node* fast= head->next;

    while(slow != fast ){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow -> next;
    }
    if(slow=fast){
        return true;
    }
    else {
    return false;
    }
}



int main(){


}
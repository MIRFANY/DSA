#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data= d;
        next = nullptr;
    }

};
void ReverseLL(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=nullptr){
        forward=curr->next;

        curr->next=NULL;
        prev=curr;
        curr=forward;
    }
}
void insertAtHead(Node* &head, int n){
    Node* temp = new Node(n);
    temp->next=head;
    head=temp;
}

Node* getIntersectionNode(Node *headA, Node *headB){
    if(!headA || !headB) return nullptr;

    Node *pA =headA;
    Node *pB =headB;
    while(pA != pB) {
        pA =pA ? pA->next :headB;
        pB =pB ? pB->next : headB;
    }

    return pA;

}


int main(){

    Node* node1 = new Node(21);
    Node* head= node1;

    insertAtHead(head, 13);
    insertAtHead(head,19);

    cout<<"The linked list are now going to .......";

    getIntersectionNode




}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next=nullptr;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<< temp-> data<< " " <<endl;
        temp = temp->next;
    }

}

void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr= head;
    Node* forward= NULL;
    while(curr!= NULL){
        forward= curr -> next;
        curr -> next = prev;
        prev= curr;
        curr = forward;
    }

}


int insert(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next = head;
    head=temp;
    
}

void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
}


int main(){
    Node* node1 = new Node(10);
    Node* head= node1;
    insert(head,12);

    print(head);

    insert(head,13);
    print(head);
    insert(head,14);
    print(head);
    insert(head,16);
    print(head);

}
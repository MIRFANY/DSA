#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next= nullptr;
        this->prev=nullptr;
    }

};

void print(Node* &head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int Length(Node* &head){
    Node* temp = head;
    int len=0;
    while(temp!= nullptr){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertNode(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next= head;
    head=temp;
}
void reverse(Node* &head, int d){
    
    Node* prev=NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr !=NULL){
        forward = curr->next;
        curr->next= prev;
        prev = curr;
        curr= forward;
    }

}

bool isCircular(Node* head){
    Node* temp = head->next;
    while(temp!= NULL && temp !=head){
        temp = temp->next;
    }

    if(temp==head){
        return true;
    }

    return false;


}
Node*  middle(Node* &head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!= nullptr){
        fast = fast->next;
        if(fast!=nullptr){
            fast=fast->next;
        }
        slow = slow->next;
    }
    return slow;

}


int main(){

    Node* node1= new Node(19);

    Node* head= node1;

    print(head);
    cout<<endl;

    // cout<<Length(head);
    insertNode(head,44);

    print(head);

    
}
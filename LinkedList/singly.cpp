#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        
        data =d;
        next=nullptr;

    }


};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next =head;
    head = temp;
}
int print(Node* &head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;

}

void insertAtPosition(Node* &head,int d, int pos){
    Node* temp = head;

    int cnt =1;
    while(cnt < pos-1){
        cnt++;
        temp =temp->next;
    }

    
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next = temp ->next;
    temp ->next =nodeToinsert;

}

int main(){
    Node* node1 = new Node(12);
    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;
    Node* head = node1;
    insertAtHead(head, 13);
    insertAtHead(head, 16);
    insertAtHead(head, 19);

    print(head);

    insertAtPosition(head,3,8);


}
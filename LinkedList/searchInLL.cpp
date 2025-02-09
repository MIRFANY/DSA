#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next =nullptr;
    }
};
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void search(Node* &head, int k){
    // Node* key = new Node(k);
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == k){
            cout<<k<<"found ";
            return;
        }
        temp=temp->next;


    } 
    cout<<k<<" not found!";

}
int print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data <<endl;
        temp = temp->next;

    }
}


int main(){
    Node* node1 = new Node(13);
    cout<<node1->data;

    Node* head=node1;

    insertAtHead(head,14);
    
    insertAtHead(head,19);
    insertAtHead(head,10);
    insertAtHead(head,12);

    print(head);
    cout<<"Time to search the element";

    search(head, 10);

    cout<<"Program executed successfully!";

}
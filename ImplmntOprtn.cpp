#include<iostream>
using namespace std;
//creation of ll
//traversal of items in it
//add elt at the beginning of ll
// delete a node in ll
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        this->val=v;
        this->next=nullptr;
    }
};
void insertAtHead(Node* &head,int val){
    Node* nodeToInsert= new Node(val);
    nodeToInsert->next=head;
    head=nodeToInsert;
}

void traverse(Node* &head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
        
    }
}
void deleteNode(Node* &head, int pos){
    Node* curr = head;
    Node* prev= nullptr;
    int cnt=0;

    while(curr->next != nullptr && cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;

    }

    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}


int main(){
    Node* newNode= new Node(12);
    Node* head=newNode;
    int n;
    cout<<"Enter the number of nodes:"<<" ";
    cin>>n;
    cout<<"Enter the values of the node:"<<" ";
    int val1;
    for(int i=0;i<n;i++){
        cin>>val1;
        insertAtHead(head,val1);

    }
    int val2;
    cout<<"Enter the element you want to insert at the beginning:"<<" ";
    cin>>val2;
    insertAtHead(head,val2);
    cout<<endl;

    cout<<"The linked list after inserting the node at beginning is: "<<" ";
    traverse(head);
    cout<<endl;

    cout<<"The linked list before deletion is :"<<" ";
    traverse(head);
    cout<<endl;
    cout<<"Enter the position at which you wanna delete the node in the linked list"<<" ";
    int pos;
    cin>>pos;
    deleteNode(head,pos);
    cout<<endl;
    cout<<"The linked list after deleting the node at the pos is: "<<" ";
    traverse(head);


}
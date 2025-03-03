#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data=d;
        next=nullptr;
    }
};

void insertAtHead(Node* &head,int d){
    Node* nodeToInsert=new Node(d);
    Node* temp=head;
    nodeToInsert->next=temp;
    temp=nodeToInsert;

}


int sort012(Node* &head){
    int zeroCount=0,oneCount=0,twoCount=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }
        else if(temp->data==2){
            twoCount++;
        }
    }

    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
}
int printLL(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}
int main(){
    Node* node1=new Node(1);
    Node* head=node1;

    insertAtHead(head,1);
    
    insertAtHead(head,0);
    
    insertAtHead(head,0);
    
    insertAtHead(head,2);
    cout<<"The LL before sorting is: "<<endl;
    printLL(head);

    sort012(head);
    cout<<"The linked list after sorting is: "<<endl;

    printLL(head);
    
}
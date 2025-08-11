#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val1){
        val=val1;
        next=nullptr;
    }
};

void deleteNode(Node* &head,int n){
    Node* temp=head;
    int length=0;
    while(temp!=nullptr){
        temp=temp->next;
        length++;
    }
    temp=head;
    Node* prev=NULL;
    int actNo=length-n;
    int cnt=0;

    while(cnt<actNo){
        
        prev=temp;
        temp=temp->next;
        cnt++;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
}

int insert(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next = head;
    head=temp;
    
}
void deleteMiddl(){

}
void sortLL(Node* &head){
    Node* temp=head;
    while(temp != nullptr){
        if(temp->val < temp->next->val ){
            
        }
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<< temp-> val<< " " <<endl;
        temp = temp->next;
    }

}

int main(){
    Node* node1= new Node(12);
    Node* head=node1;
    insert(head,12);
    insert(head,15);
    insert(head,45);
    insert(head,11);
    insert(head,19);
    insert(head,16);

    cout<<"The linked list is:"<<endl;

    print(head);

    cout<<"The linked list after deletng nth Node is:"<<endl;

    deleteNode(head,3);


    print(head);
    


}
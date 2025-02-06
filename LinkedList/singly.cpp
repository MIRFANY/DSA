#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data= data ;
        this -> next=NULL;
    }

};

void traverseSinglyLinkl(Node* head){
    node* current = head;

    while(current!=nullptr){
        cout<< current -> data << endl;

        current=current -> next ;
    }
}

void searchSinglyLL(struct node* head, int target){
    node* current = head;
    while(current!=nullptr){
        if(current-> data==target){
            return true;
        }
        current = current-> next;
    }
    return false;
}

int main(){
    Node* node1= new Node();

    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;


    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next=nullptr;

    }


};


void insertAtHead(Node* head,int elt){
    Node* nodeToInsert= new Node(elt);
    nodeToInsert->next=head->next;
    head=nodeToInsert;

}

void printLL(Node* head){
    Node* temp =head;
    while(temp!=nullptr){
        cout<<temp->data;
        temp=temp->next;
    }

}

int main(){
    Node* node1=new Node(4);
    Node* head=node1;
    insertAtHead(head,31);

}

















// class stack{
//     public:
//     int top;
//     int *arr;
//     int size;

//     stack(int s){
//         size=s;
//         top=-1;
//         arr = new int[size];

//     }

//     void push(int elt){
//         if(top<size-1){
//             top++;
//             arr[top]=elt;
//         }
//     }

//     void pop(){
//         if(top!=-1){
//             top--;
//         }
//     }

//     bool empty(){
//         if(top==-1){
//             return 1;
//         }
//         else{
//             return 0;
//         }

//     }

//     int getTop(){

//         if(top!=-1){
//            cout<<arr[top];
//         }


//     }
// };
// int main(){
//     stack st(5);
//     st.push(6); 
//     st.push(9);
//     st.push(3);
//     // st.pop();
//     int topElmnt=st.getTop();
//     if(st.empty()){
//         cout<<"it is empty "<<endl;
//     }
//     else{
//         cout<<"its not empty."<<endl;
//     }

//     cout<<"The top element of stack is :"<<topElmnt;

// }
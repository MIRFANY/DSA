#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
    public:
    Node(int d){
        data=d;
        next=nullptr;
    }
    

};
class stack{
    Node* top;
    public:
    stack(){
        top=nullptr;
    }

    void push(int n){
        Node* temp=new Node(n);
        temp->next=top;
        top=temp;
    }

    int pop(){
        Node* temp=top;
        top=top->next;
        delete temp;

    }

    int peek(){
        return top->data;

    }

    bool isEmpty(){
        return top==nullptr;
    }


};

int main(){
    stack st;
    st.push(23);
    st.push(43);
    st.push(71);
    st.pop();
    st.pop();
}
    
// #include<iostream>
// using namespace std;
// class Node{
//     int data;
//     Node* next;
//     public:
//     Node(int value){
//         data=value;
//         next=nullptr;
//     }

    
    

// };

// class stack{
//     Node* top;
//     public:
//     stack(){
//         top=nullptr;
//     }

//     void push(int elt){
//         // if(isEmpty()){
//         //     cout<<"stack underflow";
//         //     return ;
//         // }
//         Node* nodetoInsert=new Node(elt);
//         nodetoInsert->next=top;
//         top = nodetoInsert;
        
//     }

//     void pop(){
//         Node* temp = top;
//         top=top->next;
//         delete temp;
//     }

//     int peek(){
//        if(isEmpty()){
//         cout<<"stack underflow."<<endl;
//         return -1;
//        }
//        return top->data;

//     }

//     bool isEmpty(){
//         return top==nullptr;

//     }

//     void display(){
//         if(isEmpty()){
//             cout<<"Stack underflow.";
//             return ;
//         }
//         Node* temp =top;
//         while(temp!=nullptr){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }

//         cout<<endl;
//     }

   

// };
// int main(){

//     stack st;
//     st.push(4);
//     st.pop();
//     st.isEmpty();
//     st.peek();

//     st.display();
    

// }






















// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int d){
//         data =d;
//         next = nullptr;
//     }
// };

// void insert(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next =head;
//     head =temp;
// }

// void Deletion(Node* &head){
//     Node* temp = head;
//     head=head->next;
//     delete temp;

// }

// void insertAtAnyPosition(Node* &head,int pos,int d){
//     Node* nodeToInsert= new Node(d);
//     Node* temp = head;
//     int cnt=0;
//     while(cnt<pos && temp != nullptr){
//         temp = temp->next;
//         cnt++;
//     }
//     nodeToInsert->next = temp ->next;
//     temp -> next = nodeToInsert;
    

// }


// int main(){

// }














// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){

//     }


// };

// class Stack{
//     Node* head;
//     public:
//     Stack(){
//         this->head = nullptr;
//     }
//     bool isEmpty(){
//         return head==NULL;

//     }

//     void push(int elt){
//         Node* new_node = new Node(elt);
//         if(!new_node){
//             cout<<stack overflow;
//         }
//         new_node->next=head;
//         head = new_node;



//     }

//     void pop(){
//         Node* temp =head;
//         head = head->next;
//         delete temp;


//     }
//     int peek(){
//         if(!isEmpty()){
//             return head->data;
//         }
//         else{
//             cout<<"stack is empty!/.";
//         }

//     }
// };
// int main(){
//     Stack st;
//     st.push(11);
//     st.push(22);

//     st.pop();
//     st.pop();


//     st.peek();

// }
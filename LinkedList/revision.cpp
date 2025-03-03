#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data= d;
        next = nullptr;
    }

};
void insertAtHead(Node* &head, int n){
    Node* temp = new Node(n);
    temp->next=head;
    head=temp;
}

void insertAtanyposition(Node* &head,int pos, int n){
    Node* temp = head;
    int cnt=0;
    while(cnt<pos){
        temp = temp ->next;

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

Node* middleofLL(Node* &head){
    Node* slow=head;
    Node* fast= head;

    while(fast!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
        }
        slow=slow->next;
    }

    // if(slow==fast){
    //     cout<<"linked list is circular!";
    // }
    // else{
    //     cout<<"Program executed";
    // }

    return slow;
}

void printLL(Node* &head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

Node* reverse(Node* &head){
    stack <int> s;
    Node* temp =head;

    while(temp!=nullptr){
        s.push(temp->data);
        temp=temp->next;
    }

    temp =head;

    while(!s.empty()){
        temp->data=s.top();
        temp=temp->next;

        s.pop();
    }

    return head;
}
Node* reverseLinkedList(Node *head){
    //initialize 'temp' at head of linked list

    Node* temp=head;
    Node* prev= NULL;

    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp = front;
    }
    return prev;
}
bool isPallindrome(Node* &head){
    Node* temp = head;
    stack<int> s;

    while(temp!=nullptr){
        s.push(temp->data);
        temp=temp->next;

    }

    temp=head;

    while(temp!=nullptr){
        if(temp->data != s.top()){
            return false;
        }
        s.pop();
        temp=temp->next;
    }
    return true;
}
void sortLL(Node* &head){
    Node* temp = head;
    int n=0;
    while(temp!=nullptr){
        temp=temp->next;
        n++;
    }
    int arr[n];
    temp=head;

    for(int i=0;i<n && temp!=nullptr;i++){
        arr[i]=temp->data;
        temp=temp->next;
    }


    bubbleSort(arr,n);
    
    temp=head;
    for(int i=0;i<n ;i++){
        temp->data=arr[i];
        temp=temp->next;
    }

   


}

Node* segregateLL(Node* &head){
    stack<int> s1;
    stack<int>s2;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data %2==0){
            s1.push(temp->data);
        }
        else{
            s2.push(temp->data);
        }
        temp=temp->next;
    }

    int cnt=0;
    int num=0;
    temp=head;

    while(!s1.empty()){
        temp->data=s1.top();
        temp=temp->next;
        s1.pop();
        
    }
   
    while(!s2.empty()){
        temp->data=s2.top();
        s2.pop();
        temp=temp->next;
    }

    return head;
}

int main(){
    Node* node1= new Node(1);
    Node* head= node1;

    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);

    // cout<<"The middle of the linked list is:"<<endl;
    // // middleofLL(head);
    cout<<"The linked list before sorting is:"<<" ";
    printLL(head);

    cout<<"The ll after sorting is: ";
    sortLL(head);
    printLL(head);



    // cout<<"The linked list after reverse is: "<<" ";
    // reverse(head);
    // printLL(head);

    // cout<<"Program executed !";
    // cout<<"checking the pallindrome:";
    // isPallindrome(head);


}
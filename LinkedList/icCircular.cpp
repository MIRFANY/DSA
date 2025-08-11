#include<iostream>
#include <bits/stdc++.h>
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

bool isCircular(Node* &head){
    Node* temp = head;
    while(temp != nullptr && temp!=head){
        temp = temp->next;
    }
    if(temp==nullptr){
        return false;
    }

    if(temp == head){
        return true;
    }
}
int length(Node* &head){
    unordered_map<Node* ,int>  visitedNodes;


    Node* temp = head;
    int timer=0;
    while(temp!=nullptr ){
        if(visitedNodes.find(temp) != visitedNodes.end()){
            int looplength=timer-visitedNodes[temp];
            return looplength;
        }
        visitedNodes[temp]=timer;

        temp = temp->next;
        timer++;

    }

    return 0;

}


int main(){
    Node* node1 = new Node(54);
    Node* head = node1;
    Node* second=new Node(12);
    Node* third= new Node(34);
    Node* fourth=new Node(43);
    Node* fifth=new Node(65);

    head->next=second;
    second->next = third;
    third->next=fourth;
    fourth->next=fifth;

    //creates a loop


    fifth->next=second;

    int lengthOfLoop=length(head);

    if(lengthOfLoop>0){
        cout<<"Loop exists! and the length of the loop is:"<<lengthOfLoop;
    }
    else{
        cout<<"No loop exists in it.";
    }
    


}
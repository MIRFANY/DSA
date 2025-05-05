#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int v){
        this->val=v;
        this->left=nullptr;
        this->right=nullptr;

    }


};
int maxT(Node* root){
    if(root==NULL){
        return 0;
    }
    int ML= maxT(root->left);
    int MR = maxT(root->right);
    return max(root->val,max(ML,MR));
}

int sumT(Node* root){
    if(root==NULL){
        return 0;
    }
    int lsT=sumT(root->left);
    int rsT=sumT(root->right);
    return root->val + lsT  + rsT;
}

int prod(Node* root){
    if(root==NULL){
        return 1;
    }

    int lsT= prod(root->left);
    int rsT= prod(root->right);
    return root->val * lsT * rsT; 

}
int levels(Node* root){
    if(root==NULL){
        return 0;
    }
    int lsT=levels(root->left);
    int rsT=levels(root->right);
    return 1+ max(lsT, rsT);



}

void display(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);

}

// bool balancedT(Node* root){
//     if(root==NULL){
//         return true;
//     }

//     ltL=levels(root->left);
//     rtL= levels(root->right);
//     if(abs(ltL-rtL)>1){
//         return false;
//     }
//     return true;
// }



int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(8);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    display(a);
    cout<<endl;
    
    cout<<sumT(a);

    cout<<endl;

    cout<<endl;
    cout<<levels(a);
    cout<<endl;
    cout<<endl;
    cout<<prod(a);
    cout<<endl;

    cout<<maxT(a);

}
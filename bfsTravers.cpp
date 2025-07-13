#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    vector<int> ans;
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right) st.push_back(temp->right);
        if(temp->left) st.push(temp->left);


    }
    return ans;
}
void postOrder(Node* root){
    if(root==NULL){
        return;
    }

    stack<Node*> st;
    st.push(root);
    vector<int> ans;
    while(st.size()>0){
        Node* temp =st.top();
        st.pop();
        ans.push_back(temp->val);
        if(root->left) st.push_back(root->left);
        if(root->right) st.push_back(root->right);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
// we are gonna be doing the boundary traversal of the binary tree
// aand for that we need three functions, namely leftboundary, bottom, rightboundary
void leftBoundary(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL){
        leftBoundary(root->right);
    }
}
void bottom(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left !=NULL  || root->right!=NULL){
        bottom(root->left);
        bottom(root->right);
        cout<<root->val<<" ";
    }
}
void rightBoundary(Node* root){
    if(root==NULL){
        return;
    }

    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout <<root->val <<" ";
}
void boundary(Node* root){
    leftboundary(root);
    bottom(root);
    rightBoundary(root->right);
}

void levelOrder(Node* root){
    

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp->val<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }

}


void reverse(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp->left) q.push(temp->left);

            if(temp->right) q.push(temp->right);

            cout<<temp->val<<" ";
        }
    }
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;


    boundary(root);
}

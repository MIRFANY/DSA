#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data = val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in the left of "<<data <<endl;

    root -> left = buildTree(root->left);
    cout<<"Enter data for inserting in the right of :"<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

//traversal of tree



// depthFirstSearch
void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);

}


void inOrder(node* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}

void postOrder(node* root){
    if(root== NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;
}
int main(){
    node* root =NULL;
    root= buildTree(root);
    


}








// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }

// };

// // node* buildTree(node* root){
// //     int data;
// //     cout<<"Enter the data :"<< endl;
// //     cin>>data;
// //     root= new node(data);
// //     if(data == -1){
// //         return NULL;
// //     }
// //     cout<<"Enter data for inserting in the left of data"<< data <<endl;
// //     root->left= buildTree(root->left);
// //     cout<<"Enter data for inserting in the right of data"<<data<<endl;
// //     root->right=buildTree(root->right);
// //     return root;
// // }

// node* buildTree(node* root){
//     int data;
//     cout<<"Enter the data:"<<endl;
//     cin>>data;
//     root= new node(data);
//     if(data==-1){
//         return NULL;
//     }

//     cout<<"Enter the data for inserting int he left of :"<<data<<endl;
//     root->left=buildTree(root->left);
//     cout<<"Enter the data for inserting in the right of : "<<data <<endl;
//     root->right=buildTree(root->right);
// }

// // node* buildTree(node* root){
// //     int data;
// //     cout<<"Enter the data:"<<endl;
// //     cin>>data;
// //     root=new node(data);
// //     if(data == -1){
// //         return NULL;
// //     }
// //     cout<<"Enter data for inserting in the left : "<<data<<endl;
// //     root->left=buildTree(root->left);
// //     cout<<"Enter data for inserting in the right : "<<data<<endl;
// //     root->right=buildTree(root->right);

// //     return root;
// // }

// void inOrder(node* root){
//     if(root == NULL){
//         return;
//     }

//     inOrder(root->left);
//     cout<<root->data<<endl;
//     inOrder(root->right);
// }
// void preOrder(node* root){
//     if(root== NULL){
//         return;
//     }

//     cout<<root->data<<endl;
//     preOrder(root->left);
//     preOrder(root->right);

// }
// void postOrder(node* root){
//     if(root== NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data;

// }


// void levelOrderTraversal(node* root){
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();
//         if(temp ->left){
//             q.push(temp->left);
//         }

//         if(temp-> right){
//             q.push(temp->right);
//         }
//     }

// }
void levelOrder(){
    
}




















// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this ->left=nullptr;
//         this->right=nullptr;
//     }
// };

// node* buildTree(node* root){
//     cout<<"Enter the data:"<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);

//     if(data==-1){
//         return NULL;
//     }

//     cout<<"Enter the data for inserting in the left of "<<data<<endl;
//     root->left=buildTree(root->left);
//     cout<<"Enter the data for inserting in the right of"<<data<<endl;
//     root->right=buildTree(root->right);

//     return root;

// }

// void printLevelOrder(node* root){
    
//     queue<node*> q;
//     q.push(root);
    
//     while(!q.empty()){
//         node* temp = q.front();
//         cout<<temp->data<<" ";
//         q.pop();
//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(root->right){
//             q.push(temp->right);
//         }
//     }
//     cout<<endl;

// }

// void inorder(node* root){
//     //base case
//     if(root== NULL){
//         return;
//     }

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void preOrder(node* root){
//     //basse case
//     if(root==NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);

// }

// void postOrder(node* root){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
   
// }

// int main(){
//     node* root=NULL;
//     root=buildTree(root);

//     cout<<"The level order traversal of the binary tree :"<<endl;

//     printLevelOrder(root);

// }












// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node( int d){
//         this->data=d;
//         this-> left =NULL;
//         this->right =NULL;

//     }
// };


// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         left=nullptr;
//         right=nullptr;
//     }
// };

// node* buildTree(node* root){
//     cout<<"Enter the data:"<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data==-1){
//         return NULL;
//     }
//     cout<<"Enter data for inserting in the left of "<<data<<endl;
//     root->left=buildTree(root->left);

//     cout<<"Enter data for inserting in the right of "<<data<<endl;
//     root->right=buildTree(root->right);
//     return root;

// }

// node* buildTree(node* root){
//     cout<<"Enter the data :"<< endl;
//     int data ;
//     cin>>data;
//     root= new node(data);
//     if(data == -1){
//         return NULL;
//     }

//     cout<<"Enter data for inserting in left of :" <<data <<endl;

//     root->left=buildTree(root->left);

//     cout<<"Enter data for inserting in right of:" <<data <<endl;
//     root->right=buildTree(root->right);

//     return root;

// }

// int main(){
//     node* root =NULL;
//     root= buildTree(root);
    
// }
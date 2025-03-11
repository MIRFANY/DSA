void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp-left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
}
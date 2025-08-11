#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Morris Inorder Traversal
void morrisTraversal(TreeNode* root) {
    TreeNode* curr = root;
    while (curr) {
        if (!curr->left) {
            cout << curr->val << " ";
            curr = curr->right;
        } else {
            TreeNode* pred = curr->left;
            while (pred->right && pred->right != curr)
                pred = pred->right;
            if (!pred->right) {
                pred->right = curr;
                curr = curr->left;
            } else {
                pred->right = nullptr;
                cout << curr->val << " ";
                curr = curr->right;
            }
        }
    }
}

// Example usage
int main() {
    /*
          1
         / \
        2   3
       / \
      4   5
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Morris Inorder Traversal: ";
    morrisTraversal(root);
    cout << endl;

    // Clean up memory (not shown for brevity)
    return 0;
}
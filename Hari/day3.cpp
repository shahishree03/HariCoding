#include<iostream>
using namespace std;
class BST{
    public:
    BST* left, *right;
    int data;
    BST(int data)
    { this->data= data;
      this->left=nullptr;
      this->right = nullptr;
    }
    
};
BST* delete(BST* root, int data)
{
    if(root==nullptr) return nullptr;
    if(root->data == data) return helper(root);
    BST* dummy= root;
    while (root != NULL) {
            if (root->data > data) {
                if (root->left != NULL && root->left->data == data) {
                    root->left = helper(root->left); 
                    break;
                    
                } else {
                   
                    if (root->right != NULL && root->right->data == data) {
                        root->right = helper(root->right);
                        break;
                    } else {
                        root = root->right; 
                    }
                }
            }
        }
        
        // Return the modified tree
        return dummy; 
    
}

BST* helper(BST* root)
{
    if(root->left==nullptr ) return root>right;
    else if(root->right==nullptr) return root->left;
    BST* rightchild = root->right;
    BST* lastright = findlast(root->left);
    lastright->right = rightchild;
    return root->left;
    
}

BST* findlast(BST* root)
{
    if(root->right==nullptr)
    {
        return root;
    }
    return findlast(root->right);
}

int main()
{
    
}

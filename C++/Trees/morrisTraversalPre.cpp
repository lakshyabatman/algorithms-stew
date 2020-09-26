#include <iostream> 
using namespace std;  
  
class node  
{  
    public: 
    int data;  
    node *left, *right;  
};  
  
/* Helper function that allocates a new node with the  
given data and NULL left and right pointers. */
node* newNode(int data)  
{  
    node* temp = new node(); 
    temp->data = data;  
    temp->left = temp->right = NULL;  
    return temp;  
}  
  
// Preorder traversal without recursion and without stack  
void morrisTraversalPreorder(node* root)  {  
  while(root) {
    if(!root->left) {
      cout << root->data<<" ";
      root = root->right;
    }else {
      node * curr = root->left;
      while(curr->right && curr->right != root) {
        curr = curr->right;
      }
      if(curr->right) {
        curr->right = NULL;
        root = root->right;
      }else {
        cout << root->data<< " ";
        curr->right = root;
        root = root->left;
      }
    }
  }
}  
  
// Function for sStandard preorder traversal  
void preorder(node* root)  
{  
    if (root)  
    {  
        cout<<root->data<<" ";  
        preorder(root->left);  
        preorder(root->right);  
    }  
}  
  
/* Driver program to test above functions*/
int main()  
{  
    node* root = NULL;  
  
    root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
  
    root->right->left = newNode(6);  
    root->right->right = newNode(7);  
  
    root->left->left->left = newNode(8);  
    root->left->left->right = newNode(9);  
  
    root->left->right->left = newNode(10);  
    root->left->right->right = newNode(11);  
  
    morrisTraversalPreorder(root);  
  
    cout<<endl;  
    preorder(root);  
  
    return 0;  
}  
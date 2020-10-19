#include <iostream> 
  
using namespace std; 

struct Node { 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
struct Node* newNode(int data) 
{ 
    struct Node* node = new struct Node; 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return (node); 
} 
  
struct Node* modifytree(struct Node* root) { 
    if(!root) return root;
    Node *left = modifytree(root->left);
    Node *right = modifytree(root->right);

    root->right = left;
    Node*temp = root;
    while(temp->right) {
      temp = temp->right;
    }
    temp->right =right;
    return root;
} 
  
void printpre(struct Node* root) 
{ 
    while (root != NULL) { 
        cout << root->data << " "; 
        root = root->right; 
    } 
} 
  
int main() 
{ 
    /* Constructed binary tree is 
         10 
        / \ 
       8   2 
      / \   
     3   5     */
    struct Node* root = newNode(10); 
    root->left = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
  
    root=modifytree(root); 
    printpre(root); 
  
    return 0; 
} 
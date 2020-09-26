#include <iostream> 
#include<map>
using namespace std; 

map<int,int> mp;
// A Binary Tree Node 
struct Node { 
    int data; 
    struct Node *left, *right; 
}; 
  

Node * helper(Node*root, int data,int level, int &pos) {
  if(!root) return NULL;
  if(root->data == data) {
    mp[level] = root->data;
    root->data = mp[pos];
    pos++;
    return root;

  }
  mp[level] = root->data;
  Node*left,*right;
  left = helper(root->left,data,level+1,pos);
  if(!left) {
    right = helper(root->right,data,level+1,pos);
  }

  if(left || right) {
    root->data = mp[pos];
    pos++;
    return root;
  }
  return NULL;
}

void reverseTreePath(Node* root, int data) { 
  int pos =0;
  helper(root,data,0,pos);
} 
  
// INORDER 
void inorder(Node* root) { 
    if (root != NULL) { 
        inorder(root->left); 
        cout << root->data << " "; 
        inorder(root->right); 
    } 
} 
  
// Utility function to create a new tree node 
Node* newNode(int data) 
{ 
    Node* temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    // Let us create binary tree shown in above diagram 
    Node* root = newNode(7); 
    root->left = newNode(6); 
    root->right = newNode(5); 
    root->left->left = newNode(4); 
    root->left->right = newNode(3); 
    root->right->left = newNode(2); 
    root->right->right = newNode(1); 
  
    /*     7 
         /    \ 
        6       5 
       / \     / \ 
      4  3     2  1          */
  
    int data = 2; 
  
    // Reverse Tree Path 
    reverseTreePath(root, data); 
  
    // Traverse inorder 
    inorder(root); 
    return 0; 
} 
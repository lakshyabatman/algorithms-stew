// C++ program to construct full binary tree 
// using its preorder traversal and preorder 
// traversal of its mirror tree 
  
#include<bits/stdc++.h> 
using namespace std; 
  
struct Node 
{ 
    int data; 
    struct Node *left, *right; 
}; 
  
Node* newNode(int data) 
{ 
    Node *temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
void printInorder(Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    printInorder(node->left); 
    printf("%d ", node->data); 
    printInorder(node->right); 
} 
  
void constructBinaryTree(Node* root,int pre[],int preMirror[], int size) { 
   //TODO
} 
  
int main() 
{ 
    int preOrder[] = {1,2,4,5,3,6,7}; 
    int preOrderMirror[] = {1,3,7,6,2,5,4}; 
  
    int size = sizeof(preOrder)/sizeof(preOrder[0]); 
  
    Node* root = new Node;  
  
    constructBinaryTree(root,preOrder,preOrderMirror,size); 
  
    return 0; 
} 
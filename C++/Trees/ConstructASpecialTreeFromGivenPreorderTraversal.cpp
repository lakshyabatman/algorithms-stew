#include<bits/stdc++.h> 
  
/* A binary tree node structure */
struct node 
{ 
    int data; 
    struct node *left; 
    struct node *right; 
}; 
  
/* Utility function to create a new Binary Tree node */
struct node* newNode (int data) 
{ 
    struct node *temp = new struct node; 
    temp->data = data; 
    temp->left = NULL; 
    temp->right = NULL; 
    return temp; 
} 
  
node * helper(int pre[],char preLN[],int &preIndex, int n) {
  if(preIndex >= n) return NULL;
  node * root = newNode(pre[preIndex]);
  if(preLN[preIndex++]== 'L') return root;
  root->left = helper(pre,preLN,preIndex,n);
  root->right = helper(pre,preLN,preIndex,n);
  return root;
}

struct node *constructTree(int pre[], char preLN[], int n) { 
    int preIndex = 0;
    return helper(pre,preLN,preIndex,n);
} 
  
  
/* This function is used only for testing */
void printInorder (struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder (node->left); 
  
    /* then print the data of node */
    printf("%d ", node->data); 
  
    /* now recur on right child */
    printInorder (node->right); 
} 
  
/* Driver function to test above functions */
int main() 
{ 
    struct node *root = NULL; 
  
    /* Constructing tree given in the above figure 
          10 
         /  \ 
        30   15 
       /  \ 
      20   5 */
    int pre[] = {10, 30, 20, 5, 15}; 
    char preLN[] = {'N', 'N', 'L', 'L', 'L'}; 
    int n = sizeof(pre)/sizeof(pre[0]); 
  
    // construct the above tree 
    root = constructTree (pre, preLN, n); 
  
    // Test the constructed tree 
    printf("Following is Inorder Traversal of the Constructed Binary Tree: \n"); 
    printInorder (root); 
  
    return 0; 
} 
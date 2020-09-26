#include<iostream>
using namespace std;  

struct Node { 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 

struct Node* newNode(int data) 
{ 
    struct Node* node = 
          (struct Node*)malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
  
    return (node); 
} 
  
void NthInorder(struct Node* node, int &n,int &count) 
{ 
  if(!node || n <0 || count > n) return;
  NthInorder(node->left,n,count);
  count++;
  if(n==count ) {
    cout << node->data<<endl;
    return;
  }
  
  NthInorder(node->right,n,count);
} 
  
/* Driver program to test above functions*/
int main() 
{ 
    struct Node* root = newNode(10); 
    root->left = newNode(20); 
    root->right = newNode(30); 
    root->left->left = newNode(40); 
    root->left->right = newNode(50); 
  
    int n = 4; 
    int count =0;
    NthInorder(root, n,count); 
    return 0; 
} 
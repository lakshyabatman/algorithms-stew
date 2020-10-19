// C program for iterative postorder traversal using one stack 
#include<iostream>
#include<stack>
using namespace std;
  
  
struct Node { 
    int data; 
    struct Node *left, *right; 
}; 
  
  
struct Node* newNode(int data) 
{ 
    Node * node = new Node(); 
    node->data = data; 
    node->left = node->right = NULL; 
    return node; 
} 
  
void postOrderIterative(struct Node* root) { 
    if(!root) return;
    stack<Node*> st;
    do {
      while(root) {
        if(root->right) st.push(root->right);
        st.push(root);
        root =root->left;
      }
      Node *temp = st.top();
      st.pop();
      if(temp->right && !st.empty() && temp->right == st.top()) {
        root = st.top();
        st.pop();
        st.push(temp);
        
      }else { 
        cout << temp->data<< "  ";
        root = NULL;
      }
    }while(!st.empty());
} 
  
int main() 
{ 
    struct Node* root = NULL; 
    root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    printf("Post order traversal of binary tree is :\n"); 
    printf("["); 
    postOrderIterative(root); 
    printf("]"); 
      
  
    return 0; 
} 
#include <iostream> 
#include<stack>
using namespace std; 
  
struct Node { 
  
    int data; 
    Node *left, *right; 
}; 
  
Node* newNode(int data) 
{ 
    Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return node; 
} 

void postOrderIterative(Node* root) { 
    if(!root) return;
    stack<Node*> st;
    stack<int> st1;  
    st.push(root);
    while(!st.empty()) {
      Node * temp = st.top();
      st.pop();
      st1.push(temp->data);
      if(temp->left) st.push(temp->left);
      if(temp->right) st.push(temp->right);
    }
    while(!st1.empty()) {
      int t = st1.top();
      cout << t<< " ";
      st1.pop();
    }
} 
  
int main() 
{ 

    Node* root = NULL; 
    root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
  
    postOrderIterative(root); 
  
    return 0; 
} 
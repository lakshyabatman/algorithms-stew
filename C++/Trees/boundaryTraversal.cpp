#include<iostream>
#include<queue>
using namespace std;

struct node { 
    int data; 
    struct node *left, *right; 
}; 
  

void printBoundary(struct node* root) { 
  if(!root) return;
  queue<node*> q;
  q.push(root);
  while(!q.empty()) {
    int level = q.size();
    for(int i=0;i<level;i++) {
      node* t = q.front();
      q.pop();
      if(i ==0 || i == level-1 || (!t->left && !t->right)) {
        cout << t->data<<" ";
      }
      if(t->left) q.push(t->left);
      if(t->right) q.push(t->right);
    }
  }

} 
  
struct node* newNode(int data) 
{ 
    struct node* temp = (struct node*)malloc(sizeof(struct node)); 
  
    temp->data = data; 
    temp->left = temp->right = NULL; 
  
    return temp; 
} 
  
int main() { 
    struct node* root = newNode(20); 
    root->left = newNode(8); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    root->right = newNode(22); 
    root->right->right = newNode(25); 
    
    
    struct node* tree = newNode(1);
    tree->left = newNode(2);
    tree->right = newNode(3);

    tree->left->left = newNode(4);
    tree->left->right = newNode(5);
    tree->right->left = newNode(6);
    tree->right->right = newNode(7);

    tree->left->left->left = newNode(6);
    tree->left->left->right = newNode(8);

    tree->left->left->right->left = newNode(9);
    tree->left->left->right->right = newNode(11);
    tree->left->left->right->left->right = newNode(10);
    printBoundary(root); 
    cout <<endl;
    printBoundary(tree); 
  
    return 0; 
} 
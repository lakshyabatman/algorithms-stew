#include<iostream>
#include<vector>
using namespace std;

class Tree {
  public:
  int val;
  Tree *left;
  Tree *right;
  Tree(int v) {
    this->val =v;
  }

};

void addNode(Tree *root ,int v) {
    if(root->left != NULL) {
      if(root->right!= NULL) {
        addNode(root->left, v);
      }else {
        Tree *temp = new Tree(v);
        root->right =temp;
        return;
      }
    }else {
      Tree *temp = new Tree(v);
      root->left = temp;
    }
  }


vector<int> inOrder(Tree *root) {
  vector<int> arr;
  Tree *current = root;
  if(root) {
    while(current!= NULL) {
     
     if(current->left== NULL) {
       arr.push_back(current->val);
       current = current->right;
     }else {

       Tree *pre = current->left;

       while(pre->right!=NULL && pre->right!=current) {
         pre = pre->right;
       }

       if(pre->right == NULL) {
         pre->right = current;
         current = current->left;
       }else {
         pre->right = NULL;
         arr.push_back(current->val);
         current = current->right;
       }
     }
     
    }
  }
  return arr;
}

int main() {
  Tree *root = new Tree(1);
  addNode(root,2);
  addNode(root,3);
  addNode(root,4);
  addNode(root,5);
  addNode(root->right,6);
  addNode(root->right,7);
  vector<int> arr = inOrder(root);
  for(int i : arr) {
    cout << i <<" ";
  }

  return 0;
}
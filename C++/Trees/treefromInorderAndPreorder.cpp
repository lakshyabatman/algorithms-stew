
#include <iostream> 
using namespace std; 
void debug() {
  cout << "works here"<<endl;
}
class node   
{  
    public: 
    char data;  
    node* left;  
    node* right;  
};  
  
int search(char arr[], int strt, int end, char value);  
node* newNode(char data);  
  

node* buildTree(char in[], char pre[], int inStrt, int inEnd,int preStart)  {  
    if(inStrt > inEnd) return NULL;
       cout << inStrt<< " " <<inEnd<< " "<<preStart<< " " << pre[preStart]<<endl;
    if(inStrt == inEnd ) return newNode(in[inStrt]);
    debug();
    node *root = newNode(pre[preStart]);
    node *left,*right;
    int k = inStrt;
    while(k<=inEnd) {
      if(in[k] == pre[preStart]) break;
      k++;
    }
    if(k> inStrt) {
      left = buildTree(in,pre,inStrt,k-1,preStart+1);
    }
    if(k<inEnd) {
      right = buildTree(in,pre,k+1,inEnd,preStart+k-inStrt+1);
    }
    root->left = left;
    root->right = right;
    return root;
}  
  

node* newNode(char data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return (Node);  
}  
  
void printInorder(node* node)  
{  
    if (node == NULL)  
        return;  
    printInorder(node->left);  
    cout<<node->data<<" ";  
    printInorder(node->right);  
}  
  
/* Driver code */
int main()  
{  
    char in[] = {'3', '1', '4' ,'0', '5' ,'2'};  
    char pre[] = { '0', '1', '3', '4', '2', '5' };  
    int len = sizeof(in) / sizeof(in[0]);  
    node* root = buildTree(in, pre, 0, len - 1,0);  
    cout << "Inorder traversal of the constructed tree is \n";  
    printInorder(root);  
}  

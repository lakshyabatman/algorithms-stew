#include <iostream> 
#include <string> 
#include <queue> 
using namespace std; 
  
struct ListNode 
{ 
    int data; 
    ListNode* next; 
}; 
  
struct TreeNode 
{ 
    int data; 
    TreeNode *left, *right; 
}; 
  
void push(struct ListNode** head_ref, int new_data) 
{ 
    struct ListNode* new_node = new ListNode; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 
  
TreeNode* newTreeNode(int data) 
{ 
    TreeNode *temp = new TreeNode; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

void convertList2Binary(ListNode *head, TreeNode* &root) { 
   queue<TreeNode*> q;
    if(!head) return;
    root = newTreeNode(head->data);
    q.push(root);
    head = head->next;
    while(head) {
        TreeNode *temp = q.front();
        TreeNode *node = newTreeNode(head->data);
        if(temp->left == NULL) {
            temp->left = node;
        }else if(temp->right== NULL) {
            temp->right = node;
        }else {
            q.pop();
            if(!q.empty()) {
                temp= q.front();
                temp->left = node;
            }
        }
        q.push(node);
        head = head->next;
    }
} 
  
// Utility function to traverse the binary tree after conversion 
void inorderTraversal(TreeNode* root) 
{ 
    if (root) 
    { 
        inorderTraversal( root->left ); 
        cout << root->data << " "; 
        inorderTraversal( root->right ); 
    } 
} 
  
int main() 
{ 
    struct ListNode* head = NULL; 
    push(&head, 36);  /* Last node of Linked List */
    push(&head, 30); 
    push(&head, 25); 
    push(&head, 15); 
    push(&head, 12); 
    push(&head, 10); /* First node of Linked List */
  
    TreeNode *root; 
    convertList2Binary(head, root); 
  
    cout << "Inorder Traversal of the constructed Binary Tree is: \n"; 
    inorderTraversal(root); 
    return 0; 
} 
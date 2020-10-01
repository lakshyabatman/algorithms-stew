
/**
 * 
 * https://practice.geeksforgeeks.org/problems/construct-tree-from-inorder-and-levelorder/1
 * */


int search(int in[],int inStrt, int inEnd,int k) {
    for(int i=inStrt;i<=inEnd;i++) {
        if(in[i]==k) return i;
    } 
    return -1;
} 

int *extract(int in[],int level[],int inStrt,int inEnd,int n) {
    int *temp = new int[inEnd-inStrt+1];
    int j = 0;
    for(int i =0;i<n;i++) {
        if(search(in,inStrt,inEnd,level[i])!=-1) temp[j++]=level[i];
    }
    return temp;
}



Node* buildTree(int in[], int level[], int inStrt, int inEnd,int n){
//add code here.
    if(inStrt> inEnd) return NULL;
    Node* root = new Node(level[0]);
    if(inStrt == inEnd) return root;
    int k = search(in,inStrt,inEnd,root->key);
    int *left = extract(in,level,inStrt,k-1,n);
    int *right = extract(in,level,k+1,inEnd,n);
    
    root->left = buildTree(in,left,inStrt,k-1,n);
    root->right = buildTree(in,right,k+1,inEnd,n);
    return root;
}
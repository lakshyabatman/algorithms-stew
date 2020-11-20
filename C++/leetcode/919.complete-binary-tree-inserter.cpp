/*
 * @lc app=leetcode id=919 lang=cpp
 *
 * [919] Complete Binary Tree Inserter
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class CBTInserter {
private:
    TreeNode* root;
    queue<TreeNode*> qp;
public:
    CBTInserter(TreeNode* root) {
        TreeNode* temp = root;
        this->root = root;
        if(!root) return;
        queue<TreeNode*> q;
        q.push(temp);
        
        while(!q.empty()) {
            TreeNode* node = q.front();
            // cout << node->val<<endl;
            if(!node->left || !node->right) {
                if(node->left) q.push(node->left);
                this->qp = q;
                return;
            }
            
            if(node->left) q.push(node->left);
            if(node->right)q.push(node->right);
            q.pop();
        }
        this->qp = q;

    }
    
    int insert(int v) {
        TreeNode * newNode = new TreeNode(v);
        if(qp.empty()) {
            root = newNode;
        }else {
            TreeNode * node = qp.front();
            if(!node->left) {
                node->left = newNode;
            }else if(!node->right) {
                node->right = newNode;
            }else {
                qp.pop();
                node = qp.front();
                node->left = newNode;
            }
            qp.push(newNode);
            return node->val;
        }
        qp.push(newNode);
        return v;
        
    }
    
    TreeNode* get_root() {
        return root;
    }
};


/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(v);
 * TreeNode* param_2 = obj->get_root();
 */
// @lc code=end



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return checkSymmetric(root->left, root->right);
    }
    
    bool checkSymmetric(TreeNode* node1, TreeNode* node2) {
        if (!node1 && !node2) return true;
        
        return node1 && node2 && (node1->val == node2->val) &&
            checkSymmetric(node1->left, node2->right) &&
            checkSymmetric(node1->right, node2->left);
    }
};

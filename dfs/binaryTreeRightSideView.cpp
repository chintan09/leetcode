#include "../lib/misc.h"

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
	
	
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        
	    rightSideViewHelper(root, &result, 1);
        
        return result;
        
    }
    
    void rightSideViewHelper(TreeNode* node, vector<int> *result_ptr, int depth) {
        
        if (!node) return;
        
		if (depth > (*result_ptr).size()) {
			printf("adding %d\n\n", node->val);
			result_ptr->push_back(node->val);
		}

        
        rightSideViewHelper(node->right, result_ptr, depth+1);
        rightSideViewHelper(node->left, result_ptr, depth+1);
        
    }
};

int main()
{
	TreeNode a(33), b(20), c(20), d(555);
	a.left = &b;
	a.right = &c;
	c.right = &d;
	Solution s;
	s.rightSideView(&a);
	return 0;
}

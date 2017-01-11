#include "lib/misc.h"


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
    int kthSmallest(TreeNode* root, int k) {
		int num_elem = 0, value;
        stack<TreeNode*> elems;
		TreeNode *cur = root;
		while (num_elem != k) {
			if (cur) {
				elems.push(cur);
				cur = cur->left;
			} else {
				num_elem++;
				cur = elems.top();
				if (num_elem == k) value = cur->val;
				elems.pop();
				cur = cur->right;
			}
		}
		return value;
    }
};


int main()
{
	Solution s;
	TreeNode *root;
	s.kthSmallest(root, 10)
	return 0;
}

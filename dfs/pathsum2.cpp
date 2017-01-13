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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> result;
        vector<TreeNode *> path;
        
		printf("call psh \n");
        pathSumHelper(root, &result, &path, sum);
        
        return result;
    }
    
    
    void pathSumHelper(TreeNode* node, vector<vector<int>> *result_ptr, vector<TreeNode *> *path_ptr, int sum) {
        
        if (!node) return;
        
        if (node->left == NULL && node->right == NULL && node->val == sum) {
            printf("found a good path\n");
			for (const auto& path : path_ptr) {
				printf("value %d \n", path->val);
			}
        }
        
        if (node->left) {
            path_ptr->push_back(node);
            pathSumHelper(node->left, result_ptr, path_ptr, sum - node->val);
            path_ptr->pop_back();
        }
        
        if (node->right) {
            path_ptr->push_back(node);
            pathSumHelper(node->right, result_ptr, path_ptr, sum - node->val);
            path_ptr->pop_back();
        }
        
        
    }
};

int main()
{
	TreeNode a(33), b(20), c(20);
	a.left = &b;
	a.right = &c;
	Solution s;
	s.pathSum(&a, 53);
	return 0;
}

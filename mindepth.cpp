#include <iostream>
#include "lib/misc.h"

using namespace std;
class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == NULL) return 0;

		if (root->left == NULL && root->right == NULL) return 1;
		if (!root->left) retrun minDepth(root->right) +1;
		if (!root->right) retrun minDepth(root->left) +1;
	
		return min(minDepth(root->left), minDepth(min->right))+1;
	}
};

int main()
{
	Solution s;
	return 0;
}

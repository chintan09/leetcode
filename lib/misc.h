#ifndef __MISC__H_
#define __MISC__H_

#include <vector>
#include <queue>
#include <string>
#include <cstdlib>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <stack>
#include <set>
#include <iterator>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
#endif

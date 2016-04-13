/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
	printf("Size %d \n", lists.size());
	if (lists.size() == 1) {
		printf("Size 1\n");
		return lists.front();
	} else if (lists.size() == 2) {
		// do an actual merge here
		ListNode *l1 = lists.front(), *l2 = lists.back(), *m;
		
		return lists.front();
	} else {
		// more then 2
		ListNode* l = lists.back();
		lists.pop_back();
		ListNode* merged = mergeKLists(lists);

		vector<ListNode*> v = {merged, l};
		return mergeKLists(v);
	}
    }
};

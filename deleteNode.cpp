/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	void deleteNode(ListNode* node) {
     	if (node->next == NULL) {
			return;
		}
		ListNode* next = node->next;
		swap(node->value, next->value);
		node->next = next->next;
		return;
    }
};

#include "lib/misc.h"
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *iter = head;
        int val = INT_MIN;
        while (iter) {
            if (iter->val != val) {
                val = iter->val; 
				do {
						ListNode *next = iter->next;
						if (next && next->val == val) {
								iter->next = next->next;	
						} else {
								break;
						}
				} while (true);
            }
            iter = iter->next;
        }
        return head;
    }
};

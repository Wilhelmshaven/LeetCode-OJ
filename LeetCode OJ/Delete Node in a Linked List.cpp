/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	void deleteNode(ListNode* node) {
		*node = *(node->next);
	}
};

//Runtime: 16 ms
//Your runtime beats 9.05% of cpp submissions.
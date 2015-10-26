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
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head)return NULL;

		ListNode *tmp, *myHead;
		*myHead = *head;
		while (myHead->next)
		{
			tmp = myHead->next;
			while (tmp)
			{
				if (myHead->val == tmp->val)tmp = tmp->next;
				else
				{
					myHead->next = tmp;
					myHead = tmp;
					break;
				}
			}
			if (!tmp)
			{
				myHead->next = NULL;
				break;
			}
		}
		return head;
	}
};
//Runtime: 12 ms
//Your runtime beats 71.69% of cpp submissions.
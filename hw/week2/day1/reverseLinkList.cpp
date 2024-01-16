/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
	ListNode *reverseList(ListNode *head)
	{
		ListNode *walker = nullptr;
		ListNode *trailer = nullptr;
		ListNode *current = head;

		while (current != nullptr)
		{
			walker = current->next;
			current->next = trailer;
			trailer = current;
			current = walker;
		}
		head = trailer;

		return head;
	}
};
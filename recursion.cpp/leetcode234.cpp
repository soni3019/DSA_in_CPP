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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        	ListNode *start = NULL, *temp = head;

	while(temp != NULL){
		ListNode *new_node = new ListNode(temp->val);
		new_node->next = start;
		start = new_node;
		temp = temp->next;
	}
  
	temp = start;
	while(head != NULL){
		if(head->val != temp->val){
			return false;
		}
		head = head->next;
		temp = temp->next;
	}
	
	return true;
    }
};
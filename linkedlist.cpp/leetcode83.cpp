
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int val;
        if (head == NULL)
            return head;
        ListNode* temp = head;
        while (temp->next != NULL) {
            if (temp->val== temp->next->val) {
            
         ListNode* p = temp->next;
                temp->next = temp->next->next;
                delete p;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
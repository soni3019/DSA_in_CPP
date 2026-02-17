
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            if (temp->val == val) {
                if (prev == NULL) {
                    head = temp->next; 
                } else {
                    prev->next = temp->next;
                }
                ListNode* toDelete = temp;
                temp = temp->next; 
                delete toDelete;   // Delete the node safely
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
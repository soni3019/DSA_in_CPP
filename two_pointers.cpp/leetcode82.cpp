class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* temp = head;
        ListNode* p = NULL;
        ListNode* prev = NULL;

        while (temp != NULL && temp->next != NULL) {  // Fix: Changed `||` to `&&`
            if (temp->val != temp->next->val) {
                prev = temp;
            } else {
                int x = temp->next->val;
                p = temp;
                while (p->next != NULL && p->val == p->next->val) {  // Fix: Added `p->next != NULL` check
                    p = p->next;
                }

                if (prev != NULL) {  // Fix: Ensure `prev` is not NULL before updating links
                    prev->next = p->next;
                } else {  // If duplicates start at head, update `head`
                    head = p->next;
                }
                
                temp = p->next;
                continue;  // Fix: Avoid moving `temp` twice
            }
            temp = temp->next;
        }

        return head;
    }
};
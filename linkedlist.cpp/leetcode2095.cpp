class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr; // Edge case: single node or empty list

        ListNode *slow = head, *fast = head, *prev = nullptr;

        // Move fast pointer 2 steps ahead and slow 1 step at a time
        while (fast!=NULL && fast->next!=NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Remove the middle node
        prev->next = slow->next;
        delete slow;

        return head;
    }
};
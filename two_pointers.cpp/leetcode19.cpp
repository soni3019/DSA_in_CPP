
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==NULL || head->next==NULL){
        return NULL;
       }
  
      int count=0;
      int reach=0;
      ListNode* temp=head;
      while(temp!=NULL){
        count++;
        temp=temp->next;
      }
      reach=count-n;
      count=0;
      ListNode* prev=NULL;
      temp=head;
      if(reach==0){
        head=head->next;
        return head;
      }
      while(count!=reach){
        count ++;
        prev=temp;
temp=temp->next;
      }
      prev->next=temp->next;
      return head;
    }
};

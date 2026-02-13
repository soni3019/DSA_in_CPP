
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
   return head;


int count=0; 
ListNode*temp=head;
while(temp!=NULL){
   temp=temp->next;
   count++;
}
k=k%count;
if(k==0){
   return head;
}
int  k2=count-k;
int i=1;
ListNode*tail=head;
ListNode*prev=NULL;
 while(i<=k2){
    i++;
    prev=tail;
    tail=tail->next;
 }
 prev->next=NULL;
ListNode*p=tail;
while(tail->next!=NULL){
   tail=tail->next;
}
tail->next=head;
ListNode*f2=p;
return f2;


    }
};
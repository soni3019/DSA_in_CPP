class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
ListNode *temp1=l1;
ListNode* temp2=l2;
ListNode*dummy=new ListNode(-1);
ListNode*curr=dummy;
int carry=0;
int inisum=0;
int sum=0;
while(temp1!=NULL && temp2!=NULL){
  sum=(temp1->val+temp2->val)+carry;
  
    carry=sum/10;
    temp1=temp1->next;
    temp2=temp2->next;
 ListNode* newNode = new ListNode(sum%10);
curr->next=newNode;
curr=curr->next;
}
while(temp1!=NULL){
    inisum=temp1->val+carry;
    ListNode* newNode=new ListNode(inisum%10);
     carry=inisum/10;
    curr->next=newNode;
    curr=curr->next;
    temp1=temp1->next;
}
while(temp2!=NULL){
    inisum=temp2->val+carry;
    ListNode* newNode=new ListNode(inisum%10);
       carry=inisum/10;
     curr->next=newNode;
    curr=curr->next;
    temp2=temp2->next;
}
if(carry){
    ListNode* newNode=new ListNode(carry);
    curr->next=newNode;
    curr=curr->next;
}
return dummy->next;
}   
};

class Solution {
public:

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
     if (list1 == NULL && list2 == NULL) {
    return NULL;
  }
        if(list1==NULL)
return list2;
	if(list2==NULL)
		return list1;

	ListNode*tail=NULL;
	ListNode*rehead=NULL;
        if (list1->val <= list2->val) {
                rehead = list1;
                tail = list1;
                list1 = list1->next;
        }
		else
		{
			rehead=list2;
			tail=list2;
			list2=list2->next;
		}

        while(list1!=NULL && list2!=NULL){
                if (list1->val <= list2->val){
					tail->next=list1;
					tail=tail->next;
					list1=list1->next;
				}
			else{
				tail->next=list2;
				tail=tail->next;
				list2=list2->next;
			}
        }
	//	return head1;
		if(list1!=NULL){
			tail->next=list1;
		}
		//return head1;
		if(list2!=NULL){
					tail->next=list2;
		}
		//return head1;
			return rehead;
	
}
	};








    


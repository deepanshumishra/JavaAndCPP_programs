problem link
https://www.interviewbit.com/old/problems/sort-binary-linked-list/


ListNode* Solution::solve(ListNode* A) {
    int count0=0,count1=0;
    ListNode* temp=A;
    while(temp!=NULL)
    {
        if(temp->val==0) count0++;
        else count1++;
        temp=temp->next;
    }
    
    temp=A;
    while(count0--)
    {
        temp->val=0;
        temp=temp->next;
    
      //  count0--;
    }
    while(count1--)
    {
        temp->val=1;
        temp=temp->next;
      //  count1--;
        
    }
    return A;
    
    
}

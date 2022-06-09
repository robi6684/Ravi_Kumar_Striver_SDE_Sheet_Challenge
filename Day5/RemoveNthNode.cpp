class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return NULL;
        ListNode *fast = head, *slow = head;
        
        for(int i=0; i<n+1; i++)
        {
            if(fast == NULL)
                return head->next;
            fast = fast -> next;
        }
        
        while(fast!=NULL)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        
        
        ListNode *temp = slow->next->next;
        
        delete(slow -> next);
        
        slow -> next = temp;
        
        return head;
        
        
        
    }
};
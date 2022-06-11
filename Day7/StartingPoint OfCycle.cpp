class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         if(head == NULL)
            return NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        int flag = 0;
        
        while(fast -> next != NULL && fast -> next -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
            return NULL;
        
        ListNode *temp = head;
        while(temp != fast)
        {
            temp = temp -> next;
            fast = fast -> next;
        }
        return temp;
        
        
    }
};
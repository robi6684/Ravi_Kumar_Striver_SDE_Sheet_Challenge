class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *prev = NULL;
        
        while(curr != NULL)
        {
            ListNode *temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
            
        }
        return prev;
        
    }
};
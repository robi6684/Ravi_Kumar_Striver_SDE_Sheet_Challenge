/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        int len1 = 0, len2 = 0;
        ListNode *curr = headA;
        ListNode *temp = headB;
        
        while(curr != NULL)
        {
            len1++;
            curr = curr -> next;
        }
        while(temp != NULL)
        {
            len2++;
            temp = temp -> next;
        }
        
        if(len1 - len2 >= 0)
        {
            int val = len1 - len2;
            while(val--)
            {
                headA = headA -> next;
            }
        }
        else
        {
            int val = len2 - len1;
            while(val--)
            {
                headB = headB -> next;
            }
        }
        
        while(headA != NULL)
        {
            if(headA == headB)
                return headA;
            headA = headA -> next;
            headB = headB -> next;
        }
        return NULL;
        
    }
};
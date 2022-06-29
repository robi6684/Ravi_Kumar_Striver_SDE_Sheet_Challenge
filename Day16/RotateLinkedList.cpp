/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return head;
        
        
        ListNode* curr = head;
        
        int n = 0;
        
        while(curr != NULL)
        {
            n++;
            curr = curr -> next;
        }
        
        if(k % n == 0)
            return head;
        if( k > n)
            k = k % n;
        
        ListNode *cur = head;
        
        int val = n-k-1;
        while(val--)
        {
            cur = cur -> next;
        }
        
        ListNode *root = cur -> next;
       //cur -> next = NULL;
        
        ListNode *temp = head;
        
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        
        temp -> next = head;
        cur -> next = NULL;
        
        return root;
    }
};
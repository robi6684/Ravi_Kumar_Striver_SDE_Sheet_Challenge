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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        int carry = 0;
        ListNode *res = ans;
        
        
        while((l1 != NULL || l2 != NULL) || carry)
        {
            int sum = 0;
            if(l1 != NULL)
            {
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL)
            {
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            
            sum += carry;
            
            if(sum > 9)
            {
                carry = 1;
            }
            else
                carry = 0;
            
            ListNode *temp = new ListNode(sum % 10);
            res -> next = temp;
            res = res -> next;
            
        }
        return ans -> next;
        
    }
};
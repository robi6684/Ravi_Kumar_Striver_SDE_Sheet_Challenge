class Solution {
public:
    bool isPalindrome(ListNode* head) {
       
        vector<int> ans;
        ListNode *data = head;
        while(data != NULL)
        {
            ans.push_back(data -> val);
            data = data -> next;
        }
        
        ListNode *curr = head, *prev = NULL;
        
        while(curr != NULL)
        {
            ListNode *temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
            
        }
        
        int i = 0;
        while(prev != NULL)
        {
            if(prev -> val != ans[i])
                return false;
            prev = prev -> next;
            i++;
        }
        return true;
        
    }
};
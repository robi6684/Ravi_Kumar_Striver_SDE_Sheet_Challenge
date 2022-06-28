class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(s.count(nums[i]-1))
                continue;
            
            int n = nums[i] + 1;
            int val = 1;
            
            while(s.count(n))
            {
                val++;
                n++;
            }
            
            ans = max(ans,val);
        }
        return ans;
        
    }
};
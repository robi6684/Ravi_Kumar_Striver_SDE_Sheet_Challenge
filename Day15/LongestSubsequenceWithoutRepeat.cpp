class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        
        int l = 0, right = 0;
        int ans = 0;
        
        while(right < s.length())
        {
            if(mp.find(s[right]) != mp.end())
            {
                l = max(mp[s[right]]+1,l);
            }
            
            mp[s[right]] = right;
            
            ans = max(right-l+1, ans);
            
            right++;
        }
        
        return ans;
    }
};
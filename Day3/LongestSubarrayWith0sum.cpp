class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int pre_sum = 0;
        int maxi = 0;
        unordered_map<int,int>mp;
        for(int i=0; i<A.size(); i++)
        {
            pre_sum+=A[i];
            
            if(pre_sum == 0)
            maxi = i+1;
            
            if(mp.find(pre_sum) != mp.end())
            {
                maxi = max(maxi,i-mp[pre_sum]);
            }
            else
            {
                mp[pre_sum] = i;
            }
        }
        return maxi;
    }
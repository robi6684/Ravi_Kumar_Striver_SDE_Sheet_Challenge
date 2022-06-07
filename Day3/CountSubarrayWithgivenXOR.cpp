int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
     int pre_sum = 0;
        long long count = 0;
        unordered_map<int,int>mp;
        for(int i=0; i<arr.size(); i++)
        {
            pre_sum^=arr[i];
            
            if(pre_sum == x)
            count++;
            
            int val = pre_sum ^ x;
            if(mp.find(val) != mp.end())
            {
                count = count + mp[val];
            }
            
                mp[pre_sum]++;
           
        }
        return count;
}
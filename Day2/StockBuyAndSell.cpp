class Solution {
public:
    int maxProfit(vector<int>& prices) {
    if(prices.size() == 1)
        return 0;
    int res = prices[1] - prices[0];
    int mini = prices[0];
    
    for(int i=1; i<prices.size(); i++)
    {
        res = max(prices[i] - mini,res);
        mini = min(prices[i],mini);
    }
    if(res <= 0)
        return 0;
    else
        return res;
        
    }
};
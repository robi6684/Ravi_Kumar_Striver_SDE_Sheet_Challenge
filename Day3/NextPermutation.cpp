vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> nums(n);
    
    for(int i=0; i<permutation.size(); i++)
    {
        nums[i] = permutation[i];
    }
    int first,last;
        
        for(first = nums.size()-2; first>=0; first--)
        {
            if(nums[first] < nums[first+1])
                break;
        }
        
        if(first < 0)
            reverse(nums.begin(),nums.end());
        
        else
        {
        for(last = nums.size()-1; last>=0; last--)
        {
            if(nums[last] > nums[first])
                break;
        }
        
        swap(nums[first],nums[last]);
        
            reverse(nums.begin() + first + 1, nums.end());
        }
    return nums;
}
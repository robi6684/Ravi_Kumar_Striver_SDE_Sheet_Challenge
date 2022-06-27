class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            if(mid == 0 || mid == nums.size()-1)
                return nums[mid];
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
                return nums[mid];
            else if(mid % 2 == 0 && nums[mid-1] == nums[mid])
                high = mid-1;
            else if(mid % 2 == 0 && nums[mid] == nums[mid+1])
                low = mid+1;
            else if(mid % 2 != 0 && nums[mid-1] == nums[mid])
                low = mid+1;
            else if(mid % 2 != 0 && nums[mid] == nums[mid+1])
                high = mid-1;
            
            
        }
        return -1;
        
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid;
        if(target<nums[0])
            return 0;
        if(target>nums[r])
            return r+1;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        if(nums[mid]>target)
            return mid;
        else
            return mid+1;
    }
};
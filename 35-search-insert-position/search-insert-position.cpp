class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        if(target>nums[nums.size()-1]) return nums.size();
        int index=1;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                index=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return index;
    }
};
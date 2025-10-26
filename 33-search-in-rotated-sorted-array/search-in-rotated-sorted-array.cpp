class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,lt=nums.size()-1;
        while(st<=lt){
            int mid=st+(lt-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[st]<=nums[mid]){
                if(nums[st]<=target&&target<=nums[mid]){
                    lt=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(nums[mid]<=target&&target<=nums[lt]){
                    st=mid+1;
                }
                else{
                    lt=mid-1;
                }
            }
        }
        return -1;
    }
};
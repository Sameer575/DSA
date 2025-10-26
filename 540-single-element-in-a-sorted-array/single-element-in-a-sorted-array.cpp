class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0,n=nums.size(),lt=n-1;
        if(n==1) return nums[0];
        while(st<=lt){
            int mid=st+(lt-st)/2;
            if(mid==0&&nums[0]!=nums[1]){
                return nums[mid];
            }
            else if(mid==n-1&&nums[n-1]!=nums[n-2]){
                return nums[mid];
            }
            else if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    lt=mid-1;
                }
                else{
                    st=mid+1;
                }

            }
            else{
                if(nums[mid-1]==nums[mid]){
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
class Solution {
public:
    int bs(vector<int>nums,int target,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) return bs(nums,target,st,mid-1);
            if(nums[mid]<target) return bs(nums,target,mid+1,end);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1);
        // int st=0;
        // int lt=nums.size()-1;
        // while(lt>=st){
        //     int mid=st+(lt-st)/2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
        //     if (nums[mid]<target){st=mid+1;}
        //     if(nums[mid]>target) {lt=mid-1;}

        // }
        // return -1;
    }
};
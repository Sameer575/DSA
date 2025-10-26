class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>arr;
    int k=0;
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
    if(nums[i]>nums[(i+1)%n]){
            k=i+1;
            break;
        }
    }
    for(int i=k;i<nums.size();i++){
        arr.push_back(nums[i]);
    }
    for(int i=0;i<k;i++){
        arr.push_back(nums[i]);
    }
    sort(nums.begin(),nums.end());
    if(nums==arr){
        return true;
    }
    else{
        return false;
    }
    }

};
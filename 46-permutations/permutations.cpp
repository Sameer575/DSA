class Solution {
public:
    void getperms(vector<int>&nums,int idx,vector<vector<int>>&ans){
    // vector<vector<int>> result;
    // sort(nums.begin(), nums.end());
    // result.push_back(nums);
    // while (next_permutation(nums.begin(), nums.end())) {
    //     result.push_back(nums);
    // }
    // return result;
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            getperms(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    getperms(nums,0,ans);
    return ans;
    }
};
class Solution {
public:
void getallsubsets(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>>& allsubsets){
    if(i==nums.size()){
        allsubsets.push_back({ans});
        return;
    }
    //include
    ans.push_back(nums[i]);
    getallsubsets(nums,ans,i+1,allsubsets);
    //exclude
    ans.pop_back();
    getallsubsets(nums,ans,i+1,allsubsets);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>allsubsets;
        vector<int>ans;
        getallsubsets(nums,ans,0,allsubsets);
        sort(allsubsets.begin(),allsubsets.end());
        allsubsets.erase(unique(allsubsets.begin(),allsubsets.end()),allsubsets.end());
        return allsubsets;
    }
};
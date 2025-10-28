class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int> pref(nums.size()+1,0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            pref[i+1]=pref[i]+nums[i];
            sum+=nums[i];
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int left=pref[i];
            int right=sum-pref[i+1];
             if (nums[i] == 0) {
                if (abs(left - right) == 0) ans += 2;
                else if (abs(left - right) == 1) ans += 1;
            }
        }
        return ans;
    }
};
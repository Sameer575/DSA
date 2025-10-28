class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return 0;
        int first=0;
        int steps=0;
        int currentend=0;
        for(int i=0;i<nums.size();i++){
            first=max(first,i+nums[i]);
            if(i==currentend){
                currentend=first;
                steps++;
            }
            if(currentend>=nums.size()-1) break;
        }
        return steps;
        
    }
};
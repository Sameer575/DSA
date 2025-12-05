class Solution {
public:
    bool even(int n){
        if(n%2==0) return true;
        return false;
    }
    int countPartitions(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            int sum1=0,sum2=0;
            for(int x=0;x<=i;x++){
                sum1 += nums[x];
            }
            for(int y=i+1;y<nums.size();y++){
                sum2+=nums[y];
            }
        int diff=sum1-sum2;
            if(even(diff)){
                ans++;
            }
            
        }
        return ans;
    }
};
class Solution {
public:
    int minElement(vector<int>& nums) {
        int mins=INT_MAX;
        for(int x:nums){
        int sum=0;
        while(x>0){
        int digit=x%10;
        sum=sum+digit;
        x=x/10;
        }   
        mins=min(mins,sum);
        }
        return mins;
    }
};
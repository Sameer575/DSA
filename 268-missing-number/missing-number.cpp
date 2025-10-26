class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int n=nums.size();
         return n*(n+1)*0.5-accumulate(nums.begin(),nums.end(),0);
         //accumulate is used for sum of actual array here we also give initial sum =0; 
         //(n*(n+1)*0.5)it is used for sum of size of array
    }
};
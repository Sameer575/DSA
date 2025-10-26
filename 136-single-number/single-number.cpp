class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int z=0;
        for(int val: nums ){
            z=z^val;
        }
        return z;
    }
};
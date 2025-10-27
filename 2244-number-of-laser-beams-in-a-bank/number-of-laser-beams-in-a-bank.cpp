class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int x = bank.size();
        int ans = 0; // for store the ans
        int a = 0;   // for store previous count
        for (int i = 0; i < x; i++) {
            int count = 0;//for calculate the freq or laser in one row
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1')
                    count++;//if we found leaser then increase the count value
            }
            if (count > 0) {//if we found count is greater then 0 value then calculate the no of beams
                ans += count * a;
                a = count;
            }
        }
        return ans;
    }
};
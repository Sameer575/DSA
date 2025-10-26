class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber){
            columnNumber--;
            int reminder=columnNumber%26;
            ans.push_back('A'+reminder);
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
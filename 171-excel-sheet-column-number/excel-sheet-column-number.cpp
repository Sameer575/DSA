class Solution {
public:
    int titleToNumber(string columnTitle) {
    int ans1=0;
    for(int i=0;i<columnTitle.size();i++){
    int x = columnTitle[i] - 'A' + 1;
        ans1=ans1*26+x;
    }
    return ans1;
    }
};
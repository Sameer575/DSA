class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int x=pref.size();
        int count=0;
        for(auto &str : words) {
            if(str.substr(0,x)==pref) count++;
        }
        return count;
    }
};
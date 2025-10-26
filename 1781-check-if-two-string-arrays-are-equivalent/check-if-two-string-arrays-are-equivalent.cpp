class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        int size1=word1.size();
        int size2=word2.size();
        for(int i=0;i<size1;i++){
            s1+=word1[i];
        }
         for(int i=0;i<size2;i++){
            s2+=word2[i];
        }
        if(s1==s2){
            return true;
        };
        return false;
    }
};
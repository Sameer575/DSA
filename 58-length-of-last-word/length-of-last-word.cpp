class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size(),count=0;
        for(int i=size-1;i>=0;i--){
            if(s[i]==' '){
                if (count==0){
                    continue;
                }
                break;
            }
            else{   
                 count++;
            }
        }
        return count;

        
    }
};
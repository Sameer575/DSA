class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size()-1;
        int i=0;
        while(i<n){
            if(bits[i]==1){
                i+=2;
            }
            else i++;
        }
        return i==n;

    }
};
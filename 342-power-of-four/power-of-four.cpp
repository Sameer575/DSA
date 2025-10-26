class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n==1||n==4){
            return true;
        }
        if (n<=0){return false;}
        for(int i=1;i<30;i++){
            if (n==pow(4,i)){
                return true;
            }
        }
        return false;
    }
};
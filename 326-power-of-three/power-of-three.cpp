class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==1||n==3){
            return true;
        }
        if (n<=0){return false;}
        for(int i=1;i<30;i++){
            if (n==pow(3,i)){
                return true;
            }
        }
        return false;
    }
};
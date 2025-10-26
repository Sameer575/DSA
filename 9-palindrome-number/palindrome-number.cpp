class Solution {
public:
    bool isPalindrome(int x) {
        long long digit,rev=0,n=x;
        if(x<0){
            return false;
        }
        else{
        while(x!=0){
            digit=x%10;
            rev=(rev*10)+digit;
            x=x/10;
        }
        if (n==rev){
            return true;
        }
        else{
            return false;
        }}
    };
};
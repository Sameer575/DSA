class Solution {
public:
    int reverse(int x) {
        long int rev=0,temp=x;
        if(temp<0) temp*=(-1);
        while(temp>0){
            rev=(rev*10)+(temp%10);
            temp/=10;
        }
        if(x<0) rev=rev*(-1);
        if(rev<INT_MIN || rev>INT_MAX) rev= 0;
        return rev;
    }
};
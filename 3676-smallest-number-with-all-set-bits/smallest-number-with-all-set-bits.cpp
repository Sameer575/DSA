class Solution {
public:
    int smallestNumber(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            int z=pow(2,i)-1;
            if(z>=n){
            ans+=z;
            break;}
        }
        return ans;
    }
};
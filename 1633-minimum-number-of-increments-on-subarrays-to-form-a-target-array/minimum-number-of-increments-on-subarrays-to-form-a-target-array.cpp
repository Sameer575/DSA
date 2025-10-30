class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n=target.size();
        int steps=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,target[i]);
        }
         steps+=mini;
         for(int i=0;i<n-1;i++){
            if(target[i]>target[i+1]) steps+=target[i]-target[i+1];
         }
         if(target[n-1]>mini){
            steps+=target[n-1]-mini;
         }
       return steps;
    }
};
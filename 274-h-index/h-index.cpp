class Solution {
public:
    int hIndex(vector<int>& citations) {
        // int n=citations.size();
        sort(citations.begin(),citations.end());
             int n=citations.size();
        int left=0,right=n-1;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(citations[mid]>=n-mid){
                ans=n-mid;
                right=mid-1;
            }
            else left=mid+1;
        }
       return ans; 
        // for (int i=0;i<n;++i) {
        //     if (citations[i]>=i+1)
        //         continue;
        //     else
        //         return i;
        // }
        // return n;
    }
};
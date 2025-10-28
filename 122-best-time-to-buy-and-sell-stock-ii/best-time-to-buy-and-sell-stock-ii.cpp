class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minprofit=prices[0];
      int maxprofit=0;
      int ans=0;
      for(int i=1;i<prices.size();i++){
        maxprofit=max(maxprofit,prices[i]-minprofit);
        if(maxprofit>0){
            ans+=maxprofit;
            maxprofit=0;
            minprofit=prices[i];
        }
        minprofit=min(minprofit,prices[i]);

      }
      return ans;
    }
};
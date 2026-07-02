class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
         int minprice=prices[0];
        int maxprofit=0;
        int currentprofit=0;
        for(int i=0;i<n;i++)
        {
       
    minprice=min(minprice,prices[i]);
        currentprofit=prices[i]-minprice;
        maxprofit=max(currentprofit,maxprofit);
        }
        return maxprofit;
        
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int profit = 0;
        int minn = prices[0];
        for(int i=1;i<prices.size();i++){
            profit = prices[i]-minn;
            maxprofit = max(maxprofit,profit);
            minn = min(minn,prices[i]);
        }
        return maxprofit;
    }
};

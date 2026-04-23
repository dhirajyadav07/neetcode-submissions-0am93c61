class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), profit = 0;
        int i = 0;
        int buy=0, sell=0;
        
        while (i < n - 1) {
            if (prices[i] < prices[i + 1]) {
                buy = prices[i++];

                while (i < n - 1 && prices[i] < prices[i + 1]) {
                    i++;
                }

                sell = prices[i];
                profit += sell - buy;
            }
            i++;
        }
        return profit;
    }
};
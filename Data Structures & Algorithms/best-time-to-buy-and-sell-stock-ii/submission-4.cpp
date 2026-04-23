class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int i=0;
      int buy,sell;
      int profit=0;
while(i<prices.size()-1){
  if(prices[i]<prices[i+1]){
   buy=prices[i];
   i++;
   while(i < prices.size() - 1 && prices[i]<prices[i+1]){
    i++;
   }
   sell=prices[i];
   profit +=sell-buy;
   i++;
  }
  else{
    i++;
  }
}
return profit;
    }
};
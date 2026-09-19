class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0], profit=0;

        for(int i=0; i<prices.size(); i++){
            if(min > prices[i]){
                min = prices[i];
            }
            if(profit < (prices[i] - min)){
                profit = (prices[i] - min);
            }
        }
        return profit;
    }
};
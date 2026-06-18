class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maximum_profit = 0;
        for(int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                int profit = prices[j]-prices[i];
                maximum_profit = max(maximum_profit, profit);
            }
        }
    return maximum_profit;
    }
};

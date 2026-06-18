class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maximum_profit = 0;
        // for(int i = 0; i < n; i++){
        //     for (int j = i; j < n; j++){
        //         int profit = prices[j]-prices[i];
        //         maximum_profit = max(maximum_profit, profit);
        //     }
        // }
        
        vector<int> max_for;
        max_for.insert(max_for.begin(), 0);
        int maximum_forward = prices[n-1];
        for (int i = n-1; i > 0; i--){
            maximum_forward = max(prices[i], maximum_forward);
            max_for.insert(max_for.begin(), maximum_forward);
            
        }
        for (int j = 0; j < n; j++){
            int profit = 0;
            profit = max_for[j] - prices[j];
            maximum_profit = max(maximum_profit, profit);
        }
        return maximum_profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int bestPrice = 0;
        int n = prices.size();
        int i = 0, j = 1;
        if(n == 1) return 0;
        while(j < n) {
            
            while(prices[i] > prices[j] && i < j) {
                i++;
            }
            bestPrice = max(bestPrice, prices[j] - prices[i]);
            j++;
        }
        return bestPrice;
    }
};

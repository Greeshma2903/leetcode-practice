class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Difference btwn i and ii) We can select multiple profile ranges
        int i = 0, buy, sell, maxProfit = 0;
        int N = prices.size() - 1;
        while (i < N) {
            // pick the dip value for buying
            while (i < N && prices[i] >= prices[i + 1]) {
                i++;
            }
            buy = prices[i];

            // pick the next peak value for selling
            while (i < N && prices[i] < prices[i + 1]) {
                i++;
            }
            sell = prices[i];

            // caculate profit
            maxProfit += (sell - buy);
        }
        return maxProfit;
    }
};
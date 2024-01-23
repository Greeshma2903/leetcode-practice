class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1)
            return 0; // if only one day, return 0 profits
        int profit = 0;
        int left = 0;   // left pointer
        int right = 1;  // right pointer

        // two pointer approach
        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int cur_profit = prices[right] - prices[left];
                profit =
                    max(cur_profit,
                        profit); // update profit based on current max value
            } else {
                // if prices on left is lower than right,
                // move left pointer to current smallest value
                left = right;
            }
            right++;
        }
        return profit;
    }
};
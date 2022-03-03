class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sellPrice, buyPrice;
        int left = 0;
        int right = 1;
        int currProfit =0, maxProfit =0;
        while(right < prices.size())
        {
            currProfit = prices[right] - prices[left];
            if(prices[right] > prices[left])
            {
                maxProfit = max(currProfit, maxProfit);
            }
            else {
                left = right;
            }
            
            right++;
        }
        return maxProfit;
    }
};
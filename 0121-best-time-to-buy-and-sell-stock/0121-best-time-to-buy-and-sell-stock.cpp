class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // optimize of profit windows

        int left = 0, right = 1;
        int maxPro =  0;
        
        while (right < prices.size())
        {
            // if buy prices is less than sell prices
            if(prices[left] < prices[right])
            {
                maxPro = max(maxPro, prices[right] - prices[left]);
            }
            else {
                // move left pointer ahead (buy day)
                left = right;
            }
            right++;
        }

        return maxPro;
    }
};
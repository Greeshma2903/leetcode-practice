class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort the vector (resultant is a array in ascending order)
        sort(nums.begin(), nums.end());

        // base case 1: if size < 3, return - already satisfied
        // base case 2: if first element is +ve, return
        if(nums[0] > 0) return {};

        // finding triplets
        vector<vector<int>> answer;

        // fix on one value, then the problem becomes 2sum
        for(int i = 0; i < nums.size(); i++)
        {
            // base 1: if nums[i] > 0, break
            if(nums[i] > 0) break;

            // base 2: to skip recurring values (which are fixed), skip loop if prev and current values are same
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            // calculate sum, and two pointers (low - to next value after i, high - last value in array)
            int sum = 0, low = i+1, high = nums.size() - 1;
            
            // two pointer search
            while(low < high) {
                sum = nums[i] + nums[low] + nums[high];
                // case: positive sum -> indicates more -ve numbers required, decrement high
                if(sum > 0)
                {
                    high--;
                }
                // case: negative sum -> indicates more +ve numbers required, increment low
                else if(sum < 0)
                {
                    low++;
                }
                // case: sum = 0, push to answer and update low & high
                else {
                    answer.push_back({nums[i], nums[low], nums[high]});
                    // to avoid duplicate entry, update the low and high, to new values after the last low & high occurance
                    int prev_low_val = nums[low], prev_high_val = nums[high];
                    while(low < high && nums[low] == prev_low_val)
                    {
                        low++;
                    }
                    while(low < high && nums[high] == prev_high_val)
                    {
                        high--;
                    }
                }
            }
        }
        return answer;
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Approach 1: BRUTE FORCE
        int i, j, count = 0, sum = 0;
        // for single valued array
        if (nums.size() == 1) {
            if (nums[0] == k)
                return 1;
            else
                return 0;
        }

        for (i = 0; i < nums.size(); i++) {
            // if the number itself is equal to k
            // note: donot continue after this, as [0,0] case invalids. 
            if (nums[i] == k)
                count++;

            // initiate sum to value itself
            sum = nums[i];
            // search all possible length subarrays from current value
            for (j = i + 1; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == k) {
                    count++;
                } 
            }
        }
        return count;
    }
};
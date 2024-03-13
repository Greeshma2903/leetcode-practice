class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // BRUTE APPROACH --------------
        /*
        int sum = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = nums[i];
            if (nums[i]%k == 0)
                count++;

            for (int j = i+1; j < nums.size(); j++) {
                sum += nums[j];
                if (sum % k == 0) {
                    count++;
                }
            }
        }
        return count;
        */
        // OPTIMIZED: O(n) solution --------
        unordered_map<int, int> freqTable;
        int runningSum = 0, remainder, count = 0;
        freqTable[0] = 1; // initial sum = 0
        for (int i = 0; i < nums.size(); i++) {
            // running prefix sum value
            runningSum += nums[i];

            // calculate remainder using prefix sum
            remainder = runningSum % k;
            if (remainder < 0)
                remainder += k; // rule out negative remainders
            // if remainder already exists in table, add it's existing frequency
            if (freqTable.find(remainder) != freqTable.end()) {
                count += freqTable[remainder];
            }
            // update the frequency of remainder in table
            freqTable[remainder]++;
        }

        return count;
    }
};
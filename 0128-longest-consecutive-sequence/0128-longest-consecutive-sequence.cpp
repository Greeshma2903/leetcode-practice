class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Method 1: Sort and search
        // Method 2: Using Hashmap
        /*
        unordered_map<int, int> umap;
        int len = 0; // longest sequence count
        // base cases
        if (nums.size() == 0)
            return len;
        if (nums.size() == 1)
            return 1;

        // fill unordered map
        for (int i = 0; i < nums.size(); i++) {
            // assume every element as start of new sequence
            umap[nums[i]] = true;
        }

        // check if every element is start of new subsequence or not
        for (int i = 0; i < nums.size(); i++) {
            // if a value less than current element exists, then it's not start
            // of a subsequnce
            if (umap.count(nums[i] - 1) > 0)
                umap[nums[i]] = false;
        }

        // check for subsequences, new subseqnces start where key value
        // indicates true
        unordered_map<int, int>::iterator i;
        for (int i = 0; i < nums.size(); i++) {
            if (umap[nums[i]] == true) { // start of a new subsequence
                int tempLen = 1; // counting the first value of subsequence
                // while the next value in subsequence is present in map
                while (umap.count(nums[i] + tempLen) > 0) {
                    tempLen++;
                }
                len = max(tempLen, len);
            }
        }
        return len;
        */
        // Method 3: Using sets to avoid duplicates
        unordered_set<int> uSet;
        int len = 0;
        // base cases
        if (nums.size() == 0)
            return len;
        if (nums.size() == 1)
            return 1;

        // insert data into set
        for (int i = 0; i < nums.size(); i++) {
            uSet.insert(nums[i]);
        }

        // check for subsequence
        for (int i = 0; i < nums.size(); i++) {
            // if a (value - 1) doesn't belong to the array, consider it start
            // of a new subsq
            if (uSet.find(nums[i] - 1) == uSet.end()) {
                // find the next values in the subsq
                int count = 1;
                while (uSet.find(nums[i] + count) != uSet.end()) {
                    count++;
                }
                // update len with new max subsq length
                len = max(len, count);
            }
        }
        return len;
    }
};
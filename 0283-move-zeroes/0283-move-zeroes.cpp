class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr = 0;
        // move all non-zeroes to start
        for (int i = 0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        // fill remaining with zeroes
        for (; ptr < nums.size(); ptr++) {
            nums[ptr] = 0;
        }
    }
};
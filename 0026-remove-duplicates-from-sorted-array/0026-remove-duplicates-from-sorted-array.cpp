class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Method 1: Using external array and storing unique values
        // Method 2: Using two pointer approach
        if (nums.size() == 1)
            return 1;

        int ptr1 = 1;
        int ptr2 = 1;
        // iterate through array
        while (ptr2 < nums.size()) {
            // initial pointer keeps track of unique elements
            // while the end pointer helps compare next unique value in array
            if (nums[ptr1 - 1] != nums[ptr2]) {
                nums[ptr1] = nums[ptr2];
                ptr1++;
            }
            ptr2++;
        }
        return ptr1;
    }
};
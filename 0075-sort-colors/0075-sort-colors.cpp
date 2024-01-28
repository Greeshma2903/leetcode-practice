class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Method 1: Keep count of number of 0's, 1's & 2's and update the array 
        // Method 2: using three pointers
        int low = 0, high = nums.size() - 1;
        int pt = 0;
        while (pt <= high) {
            if (nums[pt] == 0) {
                // swap with pt the low index value
                nums[pt] = nums[low];
                nums[low] = 0;
                low++;
                pt++;
            } else if (nums[pt] == 2) {
                // swap pt with the high index value
                nums[pt] = nums[high];
                nums[high] = 2;
                high--;
                // dont increment pt, since the value still needs to be compared
            } else {
                pt++;
            }
        }
    }
};
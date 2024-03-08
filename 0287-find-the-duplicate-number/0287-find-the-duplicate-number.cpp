class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> uniVal;
        int val = 0;
        // APPROACH: Insert elements into a set, if the element already exists in set, then it's the repeated number.
        for(int i=0; i<nums.size(); i++) {
            if(uniVal.find(nums[i]) != uniVal.end()) {
                val = nums[i];
            } else uniVal.insert(nums[i]);
        }
        return val;
    }

};
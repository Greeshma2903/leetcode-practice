class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, y;
        vector<int> index;
        for(i=0; i < nums.size(); i++)
        {
            y = target - nums[i];
            for(j =i+1; j<nums.size(); j++)
            {
                if(y == nums[j])
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
        }
        return index;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> soln;
        // Brute Force ---->
        // for(int i=0; i<nums.size(); i++)
        // {
        //     int temp = target - nums[i];    // value of positive sum will be greater than individual
        //     for(int j=i+1; j<nums.size(); j++)
        //     {
        //         if(nums[j] == temp)
        //             {
        //                 soln.push_back(i);
        //                 soln.push_back(j);
        //                 break;
        //             }
        //     }
        // }

        // Two-pass HashMap --->
        unordered_map<int, int> unMap;

        // create hash table values
        for(int i=0; i<nums.size(); i++)
        {
            unMap[nums[i]] = i;
        }

        // check for target indices
        for(int i=0; i<nums.size(); i++)
        {
            int complement = target - nums[i];
            // check if complement exists in hash map by checking the count of such instances
            // and don't count the same element twice
            if(unMap.count(complement) && unMap[complement] != i)
            {
                soln.push_back(i);
                soln.push_back(unMap[complement]);
                break;
            }
        }

        return soln;
    }
};
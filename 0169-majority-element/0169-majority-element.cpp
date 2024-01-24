class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> uMap;
        int majEle = nums[0];    
        int maxInstance = 1;    // since every element exists atleast once
        // if element isn't in map, add it with 1 count
        // else increment the value at key by 1
        for(int i = 0; i < nums.size(); i++)
        {
            if(uMap.find(nums[i]) == uMap.end())
                uMap[nums[i]] = 1;
            else
                uMap[nums[i]] += 1;
        }

        // iterate through hashmap to find largest number
        unordered_map<int, int>::iterator i;
        for(i = uMap.begin(); i != uMap.end(); i++)
        {
            if(i->second > maxInstance)
                {   
                    maxInstance = i->second;
                    majEle = i->first;    
                }
        }

        return majEle;
    }
};
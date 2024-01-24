class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Approach 1:using Hashmap
        unordered_map<int, int> umap;
        
        // keep count of instance of each element in array
        for(auto i:nums) umap[i]++;

        // check if count of any key is greater than 2
        unordered_map<int, int>::iterator i;
        for(i=umap.begin(); i!=umap.end(); i++) {
            if(i->second >= 2) return true;
        }
        return false;

        // Approach 2 (prev soln): Sorting the array and comparing if the adjacent values are equal
    }
};
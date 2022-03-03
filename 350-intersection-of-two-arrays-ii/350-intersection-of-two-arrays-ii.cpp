class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0, k=0;
        int up1 = nums1.size();
        int up2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        // since both arrays are sorted, we can compare them using two pointer approach.
        // if (values are equal) push result and increment both pointer 
        // if (value in nums1 < value in nums2) increment first pointer
        // if (value in nums1 > value in nums2) increment second pointer
        // * this ensures that if values are repeated and common, they are pushed to result as well
        
        while(i < up1 && j < up2)
        {
            if(nums1[i] == nums2[j])
            {
                result.push_back(nums1[i]);        
                ++i;
                ++j;
            } 
            else if(nums1[i] > nums2[j])
            {   
                ++j;
            }
            else
            {
                ++i;
            }
        }
        
        return result;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        // two pointer approach
        int width = height.size() - 1; // considering the widest width
        int water = 0;                 // initial area
        // point one pointer to first line, and one to last line
        int i = 0, j = height.size() - 1;
        while (i < j) {
            // calculate area between lines
            width = j - i;
            int tempArea = width * min(height[i], height[j]);
            // update the water area, if higher value is found
            water = max(tempArea, water);

            // move the pointer from smaller to bigger value of height
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return water;
    }
};
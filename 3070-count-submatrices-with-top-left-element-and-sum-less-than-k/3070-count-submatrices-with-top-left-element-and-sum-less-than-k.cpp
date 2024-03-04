class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        // prefix sum method
        vector<vector<int>> preSum = grid;
        int ans = 0;

        // generate the prefix sum matrix
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (i == 0 && j == 0) {
                    // if first element, the sum will be value itself
                    preSum[i][j] = grid[i][j];
                } else if (i == 0) {
                    // if a row, then the sum of current cell will be equal to
                    // curr + cell_on_left
                    preSum[i][j] = preSum[i][j - 1] + grid[i][j];
                } else if (j == 0) {
                    // if a column, then the sum of current cell will be equal
                    // to curr + cell_above
                    preSum[i][j] = preSum[i - 1][j] + grid[i][j];
                } else {
                    // if a box, then the sum of current cell will be equal to
                    // curr + cell_on_left + cell_above -
                    // cell_on_top_left_of_curr
                    preSum[i][j] = preSum[i][j - 1] + preSum[i - 1][j] +
                                   grid[i][j] - preSum[i - 1][j - 1];
                }

                // count the number of satisfactory matrices
                if (preSum[i][j] <= k)
                    ans++;
            }
        }
        return ans;
    }
};
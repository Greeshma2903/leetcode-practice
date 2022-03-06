class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i, j;
        int row = 0;
        int col = matrix[i].size() -1;
        int n = matrix[i].size();
        while(row < matrix.size())
        {
            if(target == matrix[row][col])
            {   // first iteration:
                    // if target equals last element
                // next iteration:
                    //if target equals (col--)th element
                return true;
            }
            else if(target > matrix[row][n-1])
            { // if 'target' is greater than last value in the row, if true, check next row
                row++;
            }
            else
            {
                // if target less than last element, decrement col
                col--;
                if(col < 0)
                {   // if target not present in the row, return false
                    return false;
                }
            }
            
        }
        return false;
    }
    

};

// ** Time exceeded when Binary Search was used for each row :smileinpain:
// binary search
    // low = 0;
    // up = n-1;
    // mid = (low + up)/2;
    // while(low < up)
    // {
    //     if(matrix[i][mid] == target)
    //         return true;
    //     else if(matrix[i][mid] > target)
    //         up = mid - 1;
    //     else
    //         low = mid + 1;
    // }
    // return false;
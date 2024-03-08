class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // BRUTE FORCE ---------------
        
        int m = matrix.size();    // row
        int n = matrix[0].size(); // col
        vector<int> row(m), col(n);

        // mark which row/col has 0
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 2;
                    col[j] = 2;
                }
            }
        }

        int j;
        // update matrix using 'row' array
        for (int i = 0; i < m; i++) {
            j = 0;
            if (row[i] == 2) {
                while (j < n) {
                    matrix[i][j++] = 0;
                }
            }
        }

        // update matrix using 'col' array
        for (int i = 0; i < n; i++) {
            j = 0;
            if (col[i] == 2) {
                while (j < m) {
                    matrix[j++][i] = 0;
                }
            }
        }
    }
};
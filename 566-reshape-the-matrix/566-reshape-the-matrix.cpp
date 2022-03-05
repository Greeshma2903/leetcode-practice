class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // if (m == r) or (area of matrices are not equal) return matrix
        if(m == r || (m*n) != (r*c))
            return mat;
        
        int i, j, k, l;
        k =0;
        l = 0;
        vector<vector<int>> result(r, vector<int>(c, 0));
        
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                result[k][l] = mat[i][j];
                l++;
                // keep account of rows and cols of new matrix
                if(l == c)
                {
                    l = 0; 
                    k++;
                }
            }
        }
        return result;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
         int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;

        while (srow <= erow && scol <= ecol) {
            // Traverse from left to right
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            // Traverse from top to bottom
            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            // Traverse from right to left, if still within bounds
            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; j--) {
                    ans.push_back(matrix[erow][j]);
                }
            }
            // Traverse from bottom to top, if still within bounds
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
            }
            // Move to the next inner layer
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
};
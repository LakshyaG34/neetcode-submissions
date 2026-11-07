class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //to solve this question there are 2 steps, first transpose the matrix above diagonal elements, then reverse the matrix vertically

        int m = matrix.size();
        int n = matrix[0].size();

        //transpose above diagonal
        for(int i = 0; i < m; i++){
            for(int j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //revese vertically
        for(int i = 0; i < m; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
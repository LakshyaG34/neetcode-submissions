class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        unordered_set<int> r;
        unordered_set<int> c;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }

        for(int rowIndex : r){
            for(int j = 0; j < col; j++){
                matrix[rowIndex][j] = 0;
            }
        }
        for(int i = 0; i < row; i++){
            for(int colIndex : c){
                matrix[i][colIndex] = 0;
            }
        }
        
    }
};
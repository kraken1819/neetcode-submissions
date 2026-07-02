class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int row_low = 0; 
        int row_high = n-1; 
        int row_mid; 

        while(row_low <= row_high){
            row_mid = row_low + ( row_high - row_low ) / 2; 

            if(matrix[row_mid][0] > target){
                row_high = row_mid -1 ; 
            }else{
                row_low = row_mid + 1; 
            }
        }

        int row = row_high; 

        if(row < 0) return false;

        int col_low = 0; 
        int col_high = m-1; 
        int col_mid; 

        while(col_low <= col_high){
            col_mid = col_low + (col_high - col_low) / 2; 

            if(matrix[row][col_mid] == target)
                return true; 
            else if(matrix[row][col_mid] > target)
                col_high = col_mid - 1; 
            else 
                col_low = col_mid + 1; 
        }

        return false;
    }
};

#define rep(i,a,b) for(int i=a;i<=b;i++)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        vector<unordered_set<int>> sqrs(9); 

        bool is_valid = true; 

        int n = 9; 

        rep(i,0,n-1){
            if(!is_valid) break; 

            rep(j,0,n-1){
                if(board[i][j] == '.') continue;

                int num = board[i][j] - '0';

                if(rows[i].contains(num) || cols[j].contains(num) || sqrs[(i/3)* 3 + (j/3)].contains(num)){
                    is_valid = false; 
                    break; 
                }
                rows[i].insert(num);
                cols[j].insert(num);
                sqrs[(i/3)* 3 + (j/3)].insert(num);
            }
        }

        return is_valid;
    }
};

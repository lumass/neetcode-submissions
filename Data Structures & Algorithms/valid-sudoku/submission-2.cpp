class Solution {
public:

    bool isRowColValid(int x, int y, vector<vector<char>>& board) {
        for(int j = 0; j < 9; j++) {
            if(j != y && board[x][j] == board[x][y]) {
                return false;
            }
        }
        for(int i = 0; i < 9; i++) {
            if(i != x && board[i][y] == board[x][y]) {
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>> subBox(9);
        
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                if(!isRowColValid(i, j, board)) return false;
                subBox[(i / 3) * 3 + (j / 3)].push_back(board[i][j]);
            }
        }

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                int cnt = 0;
                for(int k = 0; k < subBox[(i / 3) * 3 + (j / 3)].size(); k++) {
                    if(subBox[(i / 3) * 3 + (j / 3)][k] == board[i][j])
                        cnt++;
                }
                if(cnt > 1) return false;
            }
        }
        return true;
    }
};

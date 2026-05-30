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
        vector<char> subBox1;
        vector<char> subBox2;
        vector<char> subBox3;
        vector<char> subBox4;
        vector<char> subBox5;
        vector<char> subBox6;
        vector<char> subBox7;
        vector<char> subBox8;
        vector<char> subBox9;

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                if(!isRowColValid(i, j, board)) return false;
                if(i >= 0 && i <= 2 && j >= 0 && j <= 2) 
                    subBox1.push_back(board[i][j]); 
                if(i >= 3 && i <= 5 && j >= 0 && j <= 2) 
                    subBox2.push_back(board[i][j]);
                if(i >= 6 && i <= 8 && j >= 0 && j <= 2) 
                    subBox3.push_back(board[i][j]);
                if(i >= 0 && i <= 2 && j >= 3 && j <= 5) 
                    subBox4.push_back(board[i][j]);
                if(i >= 3 && i <= 5 && j >= 3 && j <= 5) 
                    subBox5.push_back(board[i][j]);
                if(i >= 6 && i <= 8 && j >= 3 && j <= 5) 
                    subBox6.push_back(board[i][j]);
                if(i >= 0 && i <= 2 && j >= 6 && j <= 8) 
                    subBox7.push_back(board[i][j]);
                if(i >= 3 && i <= 5 && j >= 6 && j <= 8) 
                    subBox8.push_back(board[i][j]);
                if(i >= 6 && i <= 8 && j >= 6 && j <= 8) 
                    subBox9.push_back(board[i][j]);
            }
        }

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                int cnt = 0;
                if(i >= 0 && i <= 2 && j >= 0 && j <= 2) {
                    for(int k = 0; k < subBox1.size(); k++) {
                        if(subBox1[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                    continue;
                }
                if(i >= 3 && i <= 5 && j >= 0 && j <= 2) {
                    for(int k = 0; k < subBox2.size(); k++) {
                        if(subBox2[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 6 && i <= 8 && j >= 0 && j <= 2) {
                    for(int k = 0; k < subBox3.size(); k++) {
                        if(subBox3[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 0 && i <= 2 && j >= 3 && j <= 5) {
                    for(int k = 0; k < subBox4.size(); k++) {
                        if(subBox4[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 3 && i <= 5 && j >= 3 && j <= 5) {
                    for(int k = 0; k < subBox5.size(); k++) {
                        if(subBox5[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 6 && i <= 8 && j >= 3 && j <= 5) {
                    for(int k = 0; k < subBox6.size(); k++) {
                        if(subBox6[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 0 && i <= 2 && j >= 6 && j <= 8) {
                    for(int k = 0; k < subBox7.size(); k++) {
                        if(subBox7[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 3 && i <= 5 && j >= 6 && j <= 8) {
                    for(int k = 0; k < subBox8.size(); k++) {
                        if(subBox8[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
                if(i >= 6 && i <= 8 && j >= 6 && j <= 8) {
                    for(int k = 0; k < subBox9.size(); k++) {
                        if(subBox9[k] == board[i][j])
                            cnt++;
                    }
                    if(cnt > 1) return false;
                }
            }
        }
        return true;
    }
};

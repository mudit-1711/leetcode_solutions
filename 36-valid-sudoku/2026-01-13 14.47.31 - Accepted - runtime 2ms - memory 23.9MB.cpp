class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9), col(9), box(9);
        int r, c;
        for (r = 0; r < 9; r++) {
            for (c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }
                int b = (r / 3) * 3 + (c / 3);
                char value = board[r][c];
                if (row[r].count(value) == 1 || col[c].count(value) == 1 ||
                    box[b].count(value) == 1) {
                    return false;
                }
                row[r].insert(value);
                col[c].insert(value);
                box[b].insert(value);
            }
        }
        return true;
    }
};
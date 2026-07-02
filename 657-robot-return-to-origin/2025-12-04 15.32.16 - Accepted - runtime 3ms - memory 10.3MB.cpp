class Solution {
public:
    bool judgeCircle(string moves) {
        int i, j;
        int l = 0, r = 0, u = 0, d = 0;
        int n = moves.length();
        for (i = 0; i < n; i++) {
            if (moves[i] == 'L') {
                l++;
            } else if (moves[i] == 'R') {
                r++;
            } else if (moves[i] == 'U') {
                u++;
            } else {
                d++;
            }
        }
        if (l == r && d == u) {
            return true;
        } else {
            return false;
        }
    }
};
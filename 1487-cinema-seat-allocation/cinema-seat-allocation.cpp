class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& res) {
        unordered_map<int, vector<int>> v;
        for (auto& x : res) {
            int row = x[0] - 1;
            int col = x[1] - 1;
            if (!v.count(row))
                v[row] = vector<int>(10, 0);
            v[row][col] = 1;
        }
        int ans = (n - v.size()) * 2;
        for (auto& [row, seats] : v) {
            bool l = true, m = true, r = true;
            for (int j = 1; j <= 4; j++) {
                if (seats[j]) {
                    l = false;
                    break;
                }
            }
            for (int j = 3; j <= 6; j++) {
                if (seats[j]) {
                    m = false;
                    break;
                }
            }
            for (int j = 5; j <= 8; j++) {
                if (seats[j]) {
                    r = false;
                    break;
                }
            }
            if (l && r)
                ans += 2;
            else if (l || m || r)
                ans += 1;
        }
        return ans;
    }
};
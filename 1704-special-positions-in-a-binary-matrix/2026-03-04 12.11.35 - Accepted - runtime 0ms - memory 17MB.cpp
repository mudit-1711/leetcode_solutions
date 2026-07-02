class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int i, j;
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int count = 0;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if(mat[i][j]==1&&col[j]==1&&row[i]==1)count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i, j;
        for (i = 0; i < matrix.size(); i++) {
            int low = 0, high = matrix[0].size() - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (matrix[i][mid] < target) {
                    low = mid + 1;
                } else if (matrix[i][mid] > target) {
                    high = mid - 1;
                } else {
                    return true;
                }
            }
        }
    return false;
  }
};
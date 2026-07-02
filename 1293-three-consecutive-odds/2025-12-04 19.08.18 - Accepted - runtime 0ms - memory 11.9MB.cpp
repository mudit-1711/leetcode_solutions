class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i, j, m, k;
        int n = arr.size();
        for (i = 0; i <= n - 3; i++) {
            if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
                return true;
            }
        }
        return false;
    }
};
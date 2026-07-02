class Solution {
public:
    int numTeams(vector<int>& rating) {
        int i, j, k, n = rating.size(), ans = 0;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                for (k = j + 1; k < n; k++) {
                    if ((rating[i] < rating[j] && rating[j] < rating[k])
                        ||(rating[i] > rating[j] && rating[j] > rating[k])) {
                            ans++;
                        }
                }
            }
        }
        return ans;
    }
};
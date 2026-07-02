class Solution {
public:
    int countKeyChanges(string s) {
        int i, n = s.length();
        for (i = 0; i < n; i++) {
            if (s[i] >= 60 && s[i] <= 90) {
                s[i] = s[i] + 32;
            }
        }
        int count = 0;
        for (i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }
        return count;
    }
};
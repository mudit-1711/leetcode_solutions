class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        int m = t.length();
        int i, j, k;
        int sum = 0;
        for (i = 0; i < m; i++) {
            sum += t[i];
        }
        for (i = 0; i < n; i++) {
            sum = sum - s[i];
        }
        return char(sum);
    }
};
class Solution {
public:
    string toLowerCase(string s) {
        int i, j;
        int n = s.length();
        for (i = 0; i < n; i++) {
            if (s[i] <= 'Z' && s[i] >= 'A') {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};
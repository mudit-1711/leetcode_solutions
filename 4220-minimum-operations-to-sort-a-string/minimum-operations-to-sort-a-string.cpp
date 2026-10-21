class Solution {
public:
    int minOperations(string s) {
        int i, j, n = s.size();
        bool issort = false;
        for (i = 1; i < n; i++) {
            if (s[i - 1] > s[i]) {
                issort = true;
                break;
            }
        }
        if (!issort)
            return 0;
        if (n == 2)
            return -1;
        char mn = s[0], mx = s[0];
        int mni = 0, mxi = 0;
        for (i = 1; i < n; i++) {
            if (s[i] > mx) {
                mx = s[i];
                mxi = i;
            }
            if (s[i] < mn) {
                mn = s[i];
                mni = i;
            }
        }
        if (mni == 0 || s[n - 1] == mx)
            return 1;
        bool a = false, b = false;
        for (i = 0; i < n - 1; i++) {
            if (s[i] == mn)
                a = true;
        }
        for (i = 1; i < n; i++) {
            if (s[i] == mx)
                b = true;
        }
        if (a || b)
            return 2;
        return 3;
    }
};
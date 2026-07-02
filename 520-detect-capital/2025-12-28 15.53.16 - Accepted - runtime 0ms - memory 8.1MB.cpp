class Solution {
public:
    bool detectCapitalUse(string word) {
        int i, j, n = word.length();
        int count = 0;
        int co = 0;
        int a = 0, b = 0, c = 0;
        for (i = 0; i < n; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                count++;
            }
        }
        if (count == n) {
            a = 1;
        }
        b = 1;
        if (!(word[0] >= 'A' && word[0] <= 'Z')) {
            b = 0;
        }
        for (int i = 1; i < n; i++) {
            if (!(word[i] >= 'a' && word[i] <= 'z')) {
                b = 0;
                break;
            }
        }
        c = 1;
        for (i = 0; i < n; i++) {
            if (!(word[i] >= 'a' && word[i] <= 'z')) {
                c = 0;
                break;
            }
        }
        if (a == 1 || b == 1 || c == 1) {
            return true;
        } else {
            return false;
        }
    }
};
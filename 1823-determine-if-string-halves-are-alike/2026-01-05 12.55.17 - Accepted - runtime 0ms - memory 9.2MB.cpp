class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length() / 2;
        int i, j;
        int ca = 0, cb = 0;
        for (i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                ca++;
            }
        }
        for (i = n; i < 2 * n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                cb++;
            }
        }
    
    return ca == cb;
}
}
;
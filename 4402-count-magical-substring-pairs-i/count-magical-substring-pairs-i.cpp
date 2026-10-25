class Solution {
public:
    int countMagicalPairs(string s) {
        int i, j, k, n = s.size();
        int ans = 0;
        for (i = 0; i < n - 1; i++) {
            vector<int> l(27, 0), r(27, 0), freq(26, 0);
            int d = 0;
            for (j = i; j >= 0; j--) {
                if (freq[s[j] - 'a']++ == 0)
                    d++;
                l[d]++;
            }
            freq.assign(26, 0);
            d = 0;
            for (k = i+1; k<n; k++) {
                if (freq[s[k]-'a']++ == 0)
                    d++;
                r[d]++;
            }
            for (j = 0; j < 27; j++)
                ans += r[j] * l[j];
        }
        return ans;
    }
};
class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans = "";
        int i, j;
        string pref = "";
        for (i = 0; i < k; i++) {
            pref += s[i];
        }
        reverse(pref.begin(), pref.end());
        ans += pref;
        for (i = k; i < s.size(); i++) {
            ans += s[i];
        }
        return ans;
    }
};
class Solution {
public:
    string rotate(string s) {
        string ans = "";
        int i, j;
        char c = s[0];
        for (i = 1; i < s.size(); i++) {
            ans += s[i];
        }
        return ans + c;
    }
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;
        if (s == goal)
            return true;
        string o = s;
        while (s != goal) {
            if (rotate(s) == goal) {
                return true;
            }
            s = rotate(s);
            if (o == s) {
                break;
            }
        }
        return false;
    }
};
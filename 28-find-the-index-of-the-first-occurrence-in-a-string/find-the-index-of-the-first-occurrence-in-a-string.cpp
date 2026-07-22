class Solution {
public:
    int strStr(string h, string n) {
        string s = "";
        if (h == n)
            return 0;
        for (int i = 0; i < h.size(); i++) {
            s += h[i];
            if (s == n)
                return i - n.size() + 1;
            if (s.size() >= n.size() && s != n) {
                s.erase(s.begin());
            }
        }
        return -1;
    }
};
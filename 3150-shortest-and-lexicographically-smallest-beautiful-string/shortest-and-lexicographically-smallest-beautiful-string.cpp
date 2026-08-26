class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i, j;
        string ans = "";
        for (i = 0; i < s.size(); i++) {
            for (j = i; j < s.size(); j++) {
                string temp = s.substr(i, j - i + 1);
                int one = 0;
                for (auto x : temp)
                    if (x == '1')
                        one++;
                if (one == k) {
                    if ((ans.empty()) || (ans.size() > temp.size()) ||
                        (ans.size() >= temp.size() && ans > temp))
                        ans = temp;
                }
            }
        }
        return ans;
    }
};
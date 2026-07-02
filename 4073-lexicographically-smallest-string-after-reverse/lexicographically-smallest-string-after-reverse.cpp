class Solution {
public:
    string lexSmallest(string s) {
        string ans = s;
        string orginal = s;
        for (int k = 1; k <= s.size(); k++) {
            string temp = orginal;
            reverse(temp.begin(), temp.begin() + k);
            ans = min(ans, temp);
            temp = orginal;
            reverse(temp.end() - k, temp.end());
            ans = min(ans, temp);
            temp = orginal;
        }
        return ans;
    }
};
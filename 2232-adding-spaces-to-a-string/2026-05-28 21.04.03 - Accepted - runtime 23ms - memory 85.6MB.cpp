class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int i, j;
        int idx = 0;
        for (i = 0; i < spaces.size(); i++) {
            int temp = spaces[i];
            while (temp != idx) {
                ans += s[idx];
                idx++;
            }
            ans += " ";
        }
       while (idx < s.size()) {
            ans += s[idx];
            idx++;
        }
    
    return ans;
}
}
;
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i;
        reverse(s.begin(), s.end());
        for (i = 0; i < s.length(); i++) {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (word.length() > 0) {
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};
class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";
        for (auto c : s) {
            if (c == ' ') {
                reverse(word.begin(), word.end());
                ans = ans + word + " ";
                word = "";
            } else {
                word += c;
            }
        }
        reverse(word.begin(), word.end());
        ans = ans + word;
        return ans;
    }
};
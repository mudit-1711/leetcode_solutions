class Solution {
public:
    string smallestPalindrome(string s) {
        int i, j;
        string first = "", mid = "";
        vector<int> freq(26, 0);
        for (auto x : s) {
            freq[x - 'a']++;
        }
        for (i = 0; i < 26; i++) {
            first.append(freq[i] / 2, char('a' + i));
            if (freq[i] % 2 == 1) {
                mid.append(1, char('a' + i));
            }
        }
        string last = first;
        reverse(last.begin(), last.end());
        return first + mid + last;
    }
};
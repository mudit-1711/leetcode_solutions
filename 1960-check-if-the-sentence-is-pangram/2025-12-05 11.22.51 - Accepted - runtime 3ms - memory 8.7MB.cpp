class Solution {
public:
    bool checkIfPangram(string sentence) {
        int i, m, k;
        int n = sentence.length();
        char ch;
        for (ch = 'a'; ch <= 'z'; ch++) {
            bool found = false;
            for (i = 0; i < n; i++) {
                if (sentence[i] == ch) {
                    found = true;
                    break;
                }
            }
            if (found == false) {
                return false;
            }
        }
        return true;
    }
};
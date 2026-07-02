class Solution {
public:
    int vow(string s) {
        int i, c = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                c++;
            }
        }
        return c;
    }
    string reverseWords(string s) {
        string ans = "";
        int i, j;
        vector<string> v;
        string word = "";
        for (i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (word != "") {
                    v.push_back(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }
        if (word != "")
            v.push_back(word);
        unordered_map<string, int> mpp;
        for (auto x : v) {
            mpp[x] = vow(x);
        }
        int t = mpp[v[0]];
        ans += v[0];
        for (i = 1; i < v.size(); i++) {
            string temp = v[i];

            if (mpp[temp] == t) {
                reverse(temp.begin(), temp.end());
            }

            ans += " ";
            ans += temp;
        }
        return ans;
    }
};
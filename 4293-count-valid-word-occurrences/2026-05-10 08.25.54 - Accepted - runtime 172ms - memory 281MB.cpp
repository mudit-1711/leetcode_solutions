class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks,
                                     vector<string>& q) {
        int i, j;
        vector<int> ans;
        vector<string> v;
        string s = "";
        for (auto x : chunks)
            s += x;
        string t = "";
        for (i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                t += s[i];
            } else if (s[i] == '-' && i > 0 && i + 1 < s.size() &&
                       s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' &&
                       s[i + 1] <= 'z') {
                t += '-';
            } else {
                if (t != "") {
                    v.push_back(t);
                    t = "";
                }
            }
        }
        if (t != "")
            v.push_back(t);
        unordered_map<string, int> mpp;
        for (auto x : v) {
            mpp[x]++;
        }
        for (auto x : q) {
            ans.push_back(mpp[x]);
        }
        return ans;
    }
};
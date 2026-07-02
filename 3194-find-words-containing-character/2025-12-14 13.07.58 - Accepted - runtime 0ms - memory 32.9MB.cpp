class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i, j, k;
        int n = words.size();
        vector<int> ans;
        for (i = 0; i < n; i++) {
            for (j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
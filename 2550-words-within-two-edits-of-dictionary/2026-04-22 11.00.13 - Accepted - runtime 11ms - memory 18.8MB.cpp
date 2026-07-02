class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries,
                                vector<string>& dictionary) {
        vector<string> ans;
        int i, j, k, l;
        for (i = 0; i < queries.size(); i++) {
            auto c = queries[i];
            for (j = 0; j < dictionary.size(); j++) {
                auto s = dictionary[j];
                // if (queries[i] == dictionary[j]) {
                //     ans.push_back(dictionary[j]);
                // }
                int d = 0;
                for (k = 0; k < c.size(); k++) {
                    if (c[k] != s[k]) {
                        d++;
                    }
                    if(d>2)break;
                }
                if (d <= 2) {
                    ans.push_back(c);
                     break;
                }
            }
        }
        return ans;
    }
};
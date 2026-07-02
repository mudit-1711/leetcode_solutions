class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<string, pair<int, int>>> p; // len , orignal
        int i, j;
        string word = "";
        vector<string> v;
        text[0] = tolower(text[0]);
        for (i = 0; i < text.size(); i++) {
            if (text[i] !=' ') {
                word += text[i];
            } else {
                v.push_back(word);
                word = "";
            }
        }
         v.push_back(word);
        for (i = 0; i < v.size(); i++) {
            p.push_back({v[i], {v[i].size(), i}});
        }
        sort(p.begin(), p.end(), [](auto& a, auto& b) {
            if (a.second.first == b.second.first)
                return a.second.second < b.second.second;
            return a.second.first < b.second.first;
        });
        string ans ="";
        for(i=0;i<p.size();i++){
            ans+=p[i].first+" ";
        }
        ans.pop_back();
        ans[0] = toupper(ans[0]);
        return ans;
    }
};
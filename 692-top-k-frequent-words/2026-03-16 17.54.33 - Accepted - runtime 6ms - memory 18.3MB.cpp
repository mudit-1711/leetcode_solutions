class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        map<string, int> mpp;
        for (auto x : words) {
            mpp[x]++;
        }
        vector<pair<string, int>> v;
        for (auto x : mpp) {
            v.push_back({x.first, x.second});
        }
        sort(v.begin(), v.end(), [](auto a, auto b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
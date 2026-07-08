class Solution {
public:
    string itb(int x) {
        string ans = "";
        while (x > 0) {
            ans += to_string(x % 2);
            x = x / 2;
        }
        return ans;
    }
    int bti(string s) {
        int ans = 0;
        for (char c : s) {
            ans = ans * 2 + (c - '0');
        }
        return ans;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        int i, j;
        vector<pair<int, int>> v; // real , rev
        vector<int> ans;
        // cout<<itb(6);
        for (i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], bti(itb(nums[i]))});
        }
        sort(v.begin(), v.end(), [&](auto a, auto b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        });
        for (auto x : v) {
            ans.push_back(x.first);
        }
        return ans;
    }
};
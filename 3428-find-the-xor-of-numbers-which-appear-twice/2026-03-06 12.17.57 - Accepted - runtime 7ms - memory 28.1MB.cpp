class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int i, j;
        unordered_map<int, int> mpp;
        for (auto x : nums) {
            mpp[x]++;
        }
        vector<int> ans;
        for (auto x : mpp) {
            if (x.second == 2) {
                ans.push_back(x.first);
            }
        }
        int xori = 0;
        for (i = 0; i < ans.size(); i++) {
            xori^=ans[i];
        }
        return xori;
    }
};
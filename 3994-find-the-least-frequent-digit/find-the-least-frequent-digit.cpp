class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int, int> mpp;

        while (n > 0) {
            mpp[n % 10]++;
            n /= 10;
        }

        vector<pair<int, int>> freq;
        for (auto x : mpp)
            freq.push_back({x.first, x.second});

        sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
            if (a.second != b.second)
                return a.second < b.second;
            return a.first < b.first;
        });

        return freq[0].first;
    }
};
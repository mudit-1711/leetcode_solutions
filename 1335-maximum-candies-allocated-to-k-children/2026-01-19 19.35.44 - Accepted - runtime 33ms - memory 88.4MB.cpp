class Solution {
public:
    int maximun(vector<int>& v) {
        int maxi = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[maxi] < v[i]) {
                maxi = i;
            }
        }
        return v[maxi];
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1;
        int high = maximun(candies);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long count = 0;
            for (int i = 0; i < candies.size(); i++) {
                count += candies[i] / mid;
            }
            if (count >= k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};
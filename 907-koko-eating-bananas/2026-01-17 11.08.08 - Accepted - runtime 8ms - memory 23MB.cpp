class Solution {
public:
    int maxi(vector<int>& v) {
        int maxe = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[maxe] < v[i]) {
                maxe = i;
            }
        }
        return v[maxe];
    }

    long long time(vector<int>& v, int k) {
        long long totaltime = 0;
        for (int i = 0; i < v.size(); i++) {
            totaltime += (v[i]+k-1)/k;
        }
        return totaltime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxi(piles);
        while (low <= high) {
            int mid = (high + low) / 2;
            if (time(piles, mid) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
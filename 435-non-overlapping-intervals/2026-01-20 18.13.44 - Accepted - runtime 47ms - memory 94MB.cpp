class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
            [] (vector<int>& x, vector<int>& y) { return x[1] < y[1]; });
        int ans = 0, i;
        int back = intervals[0][1];
        for (i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < back) {
                ans++;
            } else {
                back = intervals[i][1];
            }
        }
        return ans;
    }
};
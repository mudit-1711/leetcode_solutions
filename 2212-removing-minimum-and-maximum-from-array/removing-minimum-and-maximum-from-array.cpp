class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i, j, n = nums.size();
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int mnidx = -1;
        int mxidx = -1;
        for (i = 0; i < n; i++) {
            if (nums[i] == mn) {
                mnidx = i;
                break;
            }
        }
        for (i = 0; i < n; i++) {
            if (nums[i] == mx) {
                mxidx = i;
                break;
            }
        }
        int c1, c2, c3;
        c1 = max(mxidx, mnidx);
        c2 = max(n - mxidx, n - mnidx);

        if (mxidx > mnidx) {
            c3 = mnidx + 1 + n - mxidx;
        } else {
            c3 = mxidx + 1 + n - mnidx;
        }

        return min(c1 + 1, min(c2, c3));
    }
};
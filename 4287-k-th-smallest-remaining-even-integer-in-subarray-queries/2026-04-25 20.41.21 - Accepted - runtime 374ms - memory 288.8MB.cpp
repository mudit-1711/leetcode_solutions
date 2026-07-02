class Solution {
public:
    vector<int> kthRemainingInteger(vector<int>& nums,
                                    vector<vector<int>>& queries) {
        int i, j, n = nums.size();
        vector<int> ans;
        vector<int> evenval, evenidx;
        for (i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                evenval.push_back(nums[i]);
                evenidx.push_back(i);
            }
        }
        for (auto q : queries) {
            long long l = q[0], r = q[1], k = q[2];
            // vector<long long> even;
            int L = lower_bound(evenidx.begin(), evenidx.end(), l) -
                    evenidx.begin();
            int R = upper_bound(evenidx.begin(), evenidx.end(), r) -
                    evenidx.begin() - 1;
            // if(L<=R){
            //     for(i=L;i<=R;i++){
            //         even.push_back(evenval[i]);
            //     }
            // }
            long long low = 2, high = 2 * (k + (R >= L ? (R - L + 1) : 0)) + 10;
            long long res = high;
            while (low <= high) {
                long long mid = (low + high) / 2;
                long long tot = mid / 2;
                long long remove = 0; // upper_bound(even.begin(), even.end(),
                                      // mid) - even.begin();
                if (L <= R) {
                    remove = upper_bound(evenval.begin() + L,
                                         evenval.begin() + R + 1,mid) -
                             (evenval.begin() + L);
                }
                long long rem = tot - remove;
                if (rem >= k) {
                    res = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};
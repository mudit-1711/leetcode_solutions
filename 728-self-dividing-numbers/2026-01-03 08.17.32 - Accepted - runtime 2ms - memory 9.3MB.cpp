class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int i, j;
        for (i = left; i <= right; i++) {
            int num = i;
            bool k = true;
            while (num > 0) {
                int d = num % 10;
                if (d == 0 || i % d != 0) {
                    k = false;
                    break;
                }
                num = num / 10;
            }
            if (k) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
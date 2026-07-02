class Solution {
public:
    int subtractProductAndSum(int n) {
        int i, j, m, p, k;
        long long sum = 0, pro = 1;
        while (n > 0) {
            m = n % 10;
            sum += m;

            pro = pro * m;
            n = n / 10;
        }
        int ans = pro - sum;
        return ans;
    }
};
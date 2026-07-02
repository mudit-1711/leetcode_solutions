class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (n < 0) {
            x = 1 / x;
            N = -N;
        }
        double pro = 1;
        while (N > 0) {
            if (N % 2 == 1) {
                pro = pro * x;
            }
            x = x * x;
            N = N / 2;
        }
        return pro;
    }
};
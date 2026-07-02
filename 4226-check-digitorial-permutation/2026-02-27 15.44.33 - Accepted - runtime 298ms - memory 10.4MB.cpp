class Solution {
public:
    long long fact(long long k) {
        int i, j;
        long long p = 1;
        for (i = 1; i <= k; i++) {
            p = p * i;
        }
        return p;
    }
    bool isDigitorialPermutation(long long n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        do {
            long long num = stoll(s);
            long long o = num;
            long long sum = 0;
            if (s[0] == '0')
                continue;
            while (num > 0) {
                int d = num % 10;
                sum += fact(d);
                num = num / 10;
            }
            if (sum == o) {
                return true;
            }

        } while (next_permutation(s.begin(), s.end()));
        return false;
    }
};
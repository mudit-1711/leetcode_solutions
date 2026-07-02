class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i, j;
        if (n <= 0) {
            return false;
        }
        while (n % 2 == 0) {
            n = n / 2;
        }
        return n == 1;
    }
};
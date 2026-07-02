class Solution {
public:
    int addDigits(int num) {

        while (num >= 10) {
            long long sum = 0, i, m;
            while (num > 0) {
                m = num % 10;
                sum = sum + m;
                num = num / 10;
            }
            num = sum;
        }
        return num;
    }
};
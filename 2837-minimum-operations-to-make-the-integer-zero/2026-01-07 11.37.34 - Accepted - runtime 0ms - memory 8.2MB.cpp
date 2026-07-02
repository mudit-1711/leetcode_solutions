class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        long long i, j;
        for (i = 0; i <= 60; i++) {
            long long ans = num1 - i * num2;
            if(ans<0){
                continue;
            }
            if (ans >= i&&__builtin_popcountll(ans)<=i) {
                return (int)i;
            }
        }
        return -1;
    }
};
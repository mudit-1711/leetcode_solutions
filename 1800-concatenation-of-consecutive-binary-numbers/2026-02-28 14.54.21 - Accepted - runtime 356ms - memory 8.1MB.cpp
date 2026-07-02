class Solution {
public:
    int concatenatedBinary(int n) {
        int i;
        long long ans = 0;
        long long mod = 1000000007;

        for(i = 1; i <= n; i++){
            int x = i;
            int bits[32];
            int j = 0;
            while(x > 0){
                bits[j] = x % 2;
                x = x / 2;
                j++;
            }
            for(int k = j - 1; k >= 0; k--){
                ans = (ans * 2 + bits[k]) % mod;
            }
        }

        return ans;
    }
};
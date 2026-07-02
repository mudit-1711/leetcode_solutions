class Solution {
public:
    int countDigitOne(int n) {
        int i, j;
        long long  pos = 1;
        int ans = 0;
        while (pos <= n) {
            long long full = n / (pos * 10);
            long long rem = n % (pos * 10);
            ans += (full) * pos;
            ans+= min(max(rem-pos+1,0LL),pos);
            pos = pos * 10;
        }
        return ans;
    }
};
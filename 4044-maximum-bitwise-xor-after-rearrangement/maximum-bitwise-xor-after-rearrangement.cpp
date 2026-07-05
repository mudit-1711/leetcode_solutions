class Solution {
public:
    string maximumXor(string s, string t) {
        string ans = "";
        int i, j, n = t.size(), idx = 0;
        int one = 0, zero = 0;
        for (auto x : t) {
            if (x == '1')
                one++;
            else
                zero++;
        }
        while ((one > 0 || zero > 0) && idx < n) {
            if (s[idx] == '0' && one > 0) {
                ans += '1';
                idx += 1;
                one -= 1;
            } else if (s[idx] == '1' && zero > 0) {
                ans += '1';
                idx += 1;
                zero -= 1;
            } else {
                ans += '0'; 
                if (s[idx] == '0') {
                    zero--; 
                } else {
                    one--;
                }
                idx++;
            }
        }
        return ans;
    }
};
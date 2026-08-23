class Solution {
public:
    bool sumGame(string num) {
        int q = 0, lq = 0, rq = 0;
        int i, lsum = 0, rsum = 0, n = num.size();
        for(i = 0; i < n / 2; i++) {
            if(num[i] == '?') {
                q++;
                lq++;
            } else {
                lsum += (num[i] - '0');
            }
        }
        for(i = n / 2; i < n; i++) {
            if(num[i] == '?') {
                q++;
                rq++;
            } else {
                rsum += (num[i] - '0');
            }
        }
        if(q % 2 != 0) {
            return true;
        }
        if(lsum - rsum == (rq - lq) / 2 * 9) {
            return false;
        }
        return true;
    }
};
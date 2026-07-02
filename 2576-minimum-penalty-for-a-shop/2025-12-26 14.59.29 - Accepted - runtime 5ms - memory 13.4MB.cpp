class Solution {
public:
    int bestClosingTime(string customers) {
        int i, j, n = customers.length(), b = 0, p=0,minp = 100000;
        for (i = 0; i < n; i++) {
            if (customers[i] == 'Y') {
                p++;
            }
        }
        minp = p;
        for (i = 0; i < n; i++) {
            if (customers[i] == 'Y') {
                p--;
            } else {
                p++;
            }
            if (p < minp) {
                minp = p;
                b = i + 1;
            }
        }
        return b;
    }
};
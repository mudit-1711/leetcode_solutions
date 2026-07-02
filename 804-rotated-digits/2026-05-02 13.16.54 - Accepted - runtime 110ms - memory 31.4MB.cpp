class Solution {
public:
    bool isgood(int x) {
        int i, j;
        vector<int> d;
        while (x > 0) {
            d.push_back(x % 10);
            x = x / 10;
        }
        reverse(d.begin(), d.end());
        vector<int> rot = d;
        for (auto c : d) {
            if (c == 3 || c == 7 || c == 4)
                return false;
        }
        for (i = 0; i < rot.size(); i++) {
            if (d[i] == 2)
                rot[i] = 5;
            else if (d[i] == 5)
                rot[i] = 2;
            else if (d[i] == 6)
                rot[i] = 9;
            else if (d[i] == 9)
                rot[i] = 6;
            else
                rot[i] = d[i];
        }
        if (rot == d) {
            return false;
        }
        return true;
    }
    int rotatedDigits(int n) {
        int i, j = 0;
        for (i = 1; i <= n; i++) {
            if (isgood(i))
                j++;
        }
        return j;
    }
};
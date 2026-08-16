class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int i, j, n = stones.size();
        int r0 = 0, r1 = 0, r2 = 0;
        for (i = 0; i < n; i++) {
            int r = stones[i] % 3;
            if (r == 1)
                r1++;
            else if (r == 2)
                r2++;
            else
                r0++;
        }
        if(r0%2==0)return r1>0&&r2>0;
        else return abs(r1-r2)>2;
    }
};
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int i, j;
        sort(piles.begin(), piles.end());
        int sum = 0;
        int n = piles.size();
        for (i = n / 3; i < n; i += 2) {
            sum += piles[i];
        }
        return sum;
    }
};
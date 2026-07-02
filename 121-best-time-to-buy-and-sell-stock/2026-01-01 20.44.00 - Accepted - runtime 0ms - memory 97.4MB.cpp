class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0, i;
        int minp = INT_MAX;
        for (i = 0; i < prices.size(); i++) {
            minp = min(minp, prices[i]);
            p = max(prices[i] - minp , p);
        }
        return p;
    }
};
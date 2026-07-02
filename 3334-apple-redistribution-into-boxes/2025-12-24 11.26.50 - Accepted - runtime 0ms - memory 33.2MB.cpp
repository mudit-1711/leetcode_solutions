class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int i, j, k, n = apple.size(), m = capacity.size();
        int applesum = 0;
        for (i = 0; i < n; i++) {
            applesum += apple[i];
        }
        sort(capacity.begin(), capacity.end());
        int sum = 0, boxes = 0;
        for (i = m - 1; i >= 0; i--) {
            sum += capacity[i];
            boxes++;
            if (sum >= applesum) {
                return boxes;
            }
        }
        return boxes;
    }
};
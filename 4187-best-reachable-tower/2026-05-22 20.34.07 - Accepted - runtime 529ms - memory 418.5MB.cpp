class Solution {
public:
    int dis(vector<int> v, vector<int> c) {
        return abs(v[0] - c[0]) + abs(v[1] - c[1]);
    }
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center,
                          int radius) {
        int i, j;
        vector<vector<int>> a;
        for (i = 0; i < towers.size(); i++) {
            vector<int> temp;
            temp.push_back(towers[i][0]);
            temp.push_back(towers[i][1]);
            int d = dis(temp, center);
            if (d <= radius) {
                a.push_back(towers[i]);
            }
        }
        if (a.empty()) {
            return {-1, -1};
        }
        int maxi = 0;
        for (i = 0; i < a.size(); i++) {
            if (a[i][2] > a[maxi][2]) {
                maxi = i;
            } else if (a[i][2] == a[maxi][2]) {
                if (a[i][0] < a[maxi][0] ||
                    (a[i][0] == a[maxi][0] && a[i][1] < a[maxi][1])) {
                    maxi = i;
                }
            }
        }
        return {a[maxi][0], a[maxi][1]};
    }
};
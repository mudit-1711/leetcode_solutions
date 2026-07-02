class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int timeg = 0;
        int time =abs( target[1]) + abs(target[0]);
        int i, j;
        bool ans=false;
        for (i = 0; i < ghosts.size(); i++) {
            timeg =
                abs(ghosts[i][0] - target[0]) + abs(ghosts[i][1] - target[1]);
            if (timeg > time) {
                ans = true;
            } else {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
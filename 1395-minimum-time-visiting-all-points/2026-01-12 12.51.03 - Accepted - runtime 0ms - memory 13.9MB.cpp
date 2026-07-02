class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int i ,time =0 ;
        for(i=1;i<points.size();i++){
            int x = abs(points[i][0]-points[i-1][0]);
            int y = abs(points[i][1]-points[i-1][1]);
            int ans = max(x,y);
            time += ans;
        }
        return time;
    }
};
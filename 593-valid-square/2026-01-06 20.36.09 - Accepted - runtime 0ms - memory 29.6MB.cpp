class Solution {
public:
    int dist(vector<int>& a, vector<int>& b) {
        return (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3,
                     vector<int>& p4) {
        vector<int> dis;
        int d1 = dist(p1, p2);
        dis.push_back(d1);
        int d2 = dist(p2, p3);
        dis.push_back(d2);
        int d3 = dist(p3, p4);
        dis.push_back(d3);
        int d4 = dist(p4, p1);
        dis.push_back(d4);
        int d5 = dist(p1, p3);
        dis.push_back(d5);
        int d6 = dist(p2, p4);
        dis.push_back(d6);
        sort(dis.begin(), dis.end());

        if (dis[0] == dis[1] && dis[1] == dis[2] && dis[2] == dis[3] &&
            dis[4] == dis[5]&&dis[0]>0)
            return true;
        return false;
    }
};
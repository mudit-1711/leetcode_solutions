class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& t) {
        int i,j=-1,ans=INT_MAX;
        for(i=0;i<d.size();i++){
            int x = d[i][0];
            int y = d[i][1];
            int range = d[i][2];
            int dis = abs(x-t[0])+abs(y-t[1]);
            if(dis<=range){
                if(dis<ans){
                    ans=dis;
                    j=i;
                }
            }
        }
        return j;
    }
};
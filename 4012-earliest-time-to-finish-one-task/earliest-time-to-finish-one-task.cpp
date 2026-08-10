class Solution {
public:
    int earliestTime(vector<vector<int>>& t) {
        int i,j;
        int ans = t[0][0]+t[0][1];
        for(i=1;i<t.size();i++){
            ans=min(ans,(t[i][0]+t[i][1]));
        }
        return ans;
    }
};
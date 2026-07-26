class Solution {
public:
vector<vector<int>>aggregateTimeSeries(vector<vector<int>>& s1, vector<vector<int>>& s2) {
        vector<vector<int>> ans;
        int i=0,j=0;
        int n=s1.size(),m=s2.size();
        while(i<n||j<m){
            if(j==m||(i<n&&s1[i][0]<s2[j][0])){
                ans.push_back({s1[i][0],s1[i][1]+(j<m?s2[j][1]:0)});
                i++;
            }else if(i==n||(s1[i][0]>s2[j][0])){
                 ans.push_back({s2[j][0],s2[j][1]+(i<n?s1[i][1]:0)});
                j++;
            }else{
                ans.push_back({s1[i][0],s1[i][1]+s2[j][1]});
                i++;
                j++;
            }
        }
        return ans;
    }
};
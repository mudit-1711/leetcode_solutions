class Solution {
public:
    double dist(vector<int>x){
        double d = sqrt(x[0]*x[0]+x[1]*x[1]);
        return d;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        int i,j,n;
        vector<pair<vector<int>,double>>v;
        for(i=0;i<points.size();i++){
            v .push_back({{points[i]},dist(points[i])});
        }
        sort(v.begin(),v.end(),[](auto a , auto b ){
 return a.second<b.second;
        });
        for(i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
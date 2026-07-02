class Solution {
public:
    auto dist(vector<int>a,vector<int>b){
        int d1 = (a[0]-b[0])*(a[0]-b[0]);
        int d2 = (a[1]-b[1])*(a[1]-b[1]);
        return sqrt(d1 + d2);
    }
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        int i,j;
        vector<int>ans;
        for(i=0;i<q.size();i++){
          auto x = q[i];
          int c=0;
          int r = x[2];
          x.pop_back();
         for(j=0;j<p.size();j++){
            if(dist(p[j],x)<=r){
                c++;
            }
         }
         ans.push_back(c);
        }
        return ans;
    }
};
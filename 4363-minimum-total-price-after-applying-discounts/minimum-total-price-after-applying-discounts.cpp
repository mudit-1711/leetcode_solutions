class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        double ans =0;
        int i,j;
        sort(p.rbegin(),p.rend());
        sort(d.rbegin(),d.rend());
        int idx=0;
        for(i=0;i<d.size()&&i<p.size();i++){
            ans+=(p[i]*(100.0-d[i])/100.0);
            idx++;
        }
        for(i=idx;i<p.size();i++){
            ans+=p[i];
        }
        return ans;
    }
};
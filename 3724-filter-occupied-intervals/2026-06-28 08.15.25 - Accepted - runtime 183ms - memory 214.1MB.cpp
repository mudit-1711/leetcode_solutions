class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occ, int frs, int fre) {
        vector<vector<int>> ans;
        int i,j;
        sort(occ.begin(),occ.end());
        for(auto x : occ){
            if(ans.empty()||x[0]>ans.back()[1]+1){
                ans.push_back(x);
            }else{
                ans.back()[1]=max(ans.back()[1],x[1]);
            }
        }
        vector<vector<int>> f;
        for(auto x : ans){
            int l = x[0],r=x[1];
            if(r<frs||l>fre){
                f.push_back({l,r});
            }else{
                if(l<frs){
                    f.push_back({l,frs-1});
                }
                if(r>fre){
                    f.push_back({fre+1,r});
                }
            }
        }
        return f;
    }
};
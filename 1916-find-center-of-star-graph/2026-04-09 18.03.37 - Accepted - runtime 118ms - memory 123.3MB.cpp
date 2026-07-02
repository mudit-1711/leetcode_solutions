class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int i,j;
        map<int,int>mpp;
        for(i=0;i<n;i++){
            mpp[edges[i][0]]++;
            mpp[edges[i][1]]++;
        }
        for(auto x : mpp){
            if(x.second==n){
                return x.first;
            }
        }
        return 0;
    }
};
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int i,j;
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(auto x : arr){
            mpp[x]++;
        }
        for(auto x : mpp){
            if(x.first==x.second){
                ans.push_back(x.first);
            }
        }
        if(ans.empty())return -1;
        return *max_element(ans.begin(),ans.end());
    }
};
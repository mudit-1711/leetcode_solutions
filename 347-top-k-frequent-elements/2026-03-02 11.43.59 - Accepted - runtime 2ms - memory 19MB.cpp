class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int i,j;
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        vector<pair<int,int>>a;
        for(auto x : mpp){
            a.push_back({x.second,x.first});
        }
       sort(a.rbegin(),a.rend());
       for(i=0;i<k;i++){
         ans.push_back(a[i].second);
       }
       return ans;
    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto y : mpp){
            if(y.second==1){
                ans.push_back(y.first);
            }
        }
        return ans ;
    }
};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int n = nums.size();
        int k = n/3;
        vector<int> ans;
        int i,j;
        unordered_map<int,int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        for(auto x : mpp){
            if(x.second>k){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto y : mpp){
            if(y.second==1){
                return y.first;
            }
        }
        return 0;
    }
};
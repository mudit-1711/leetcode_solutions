class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        int i,j;
        map<int,int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        for(auto x : mpp){
            if(x.second>k){
                for(i=0;i<k;i++){
                    ans.push_back(x.first);
                }
            }else{
                for(i=0;i<x.second;i++){
                    ans.push_back(x.first);
                }
            }
        }
        return ans;
    }
};
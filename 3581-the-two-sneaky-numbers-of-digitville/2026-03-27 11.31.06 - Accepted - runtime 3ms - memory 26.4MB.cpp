class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        map<int,int>mpp;//num,freq
        int i,j;
        for(auto x : nums){
            mpp[x]++;
        }
        for(auto x : mpp){
           if(x.second==2){
            ans.push_back(x.first);
           }
        }
        return ans;
    }
};
class Solution {
public:
    int sum(vector<int>&v){
        int ans =0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0)ans+=v[i];
        }
        return ans;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int i,j;
        vector<int>ans;
        for(auto q : queries){
            int val = q[0];
            int idx = q[1];
            nums[idx]+=val;
            ans.push_back(sum(nums));
        }
        return ans;
    }
};
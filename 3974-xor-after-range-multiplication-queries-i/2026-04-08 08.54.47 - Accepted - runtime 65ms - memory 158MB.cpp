class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int i,j,k;
        for(i=0;i<queries.size();i++){
            int idx = queries[i][0];
            while(idx<=queries[i][1]){
                nums[idx]=(1LL*nums[idx]*queries[i][3])%(1000000007);
                idx +=queries[i][2];
            }
        }
        int ans=0;
        for(i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};
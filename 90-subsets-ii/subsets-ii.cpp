class Solution {
public:
    void f(vector<vector<int>>&ans,vector<int>&nums,vector<int>&v,int idx){
        if(idx==nums.size()){
            ans.push_back(v);
            return ;
        }
        v.push_back(nums[idx]);
        f(ans,nums,v,idx+1);
        v.pop_back();
        int next=idx+1;
        while(next<nums.size()&&nums[idx]==nums[next]){
            next++;
        }
        f(ans,nums,v,next);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        f(ans,nums,v,0);
        return ans;
    }
};
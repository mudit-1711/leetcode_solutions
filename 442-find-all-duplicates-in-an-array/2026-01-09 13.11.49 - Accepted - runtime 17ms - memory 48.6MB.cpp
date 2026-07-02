class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        vector<int>ans;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
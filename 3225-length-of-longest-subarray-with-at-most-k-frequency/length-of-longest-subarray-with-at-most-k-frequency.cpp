class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int i,j=0;
        int ans=0;
        for(i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            while(mpp[nums[i]]>k){
                mpp[nums[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
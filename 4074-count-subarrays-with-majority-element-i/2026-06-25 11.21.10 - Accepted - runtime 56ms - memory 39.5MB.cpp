class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int i,j;
        int ans=0;
        for(i=0;i<nums.size();i++){
            int len=0,freq=0;
            for(j=i;j<nums.size();j++){
                len++;
                if(nums[j]==target){
                    freq++;
                }
                if(freq>(len/2)){
                    ans++;
                 }
            }
        }
        return ans;
    }
};
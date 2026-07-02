class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int i,j;
        int len=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1){
                len++;
                ans=max(ans,len);
            }else{
                len=0;
            }
        }
        return ans;
    }
};
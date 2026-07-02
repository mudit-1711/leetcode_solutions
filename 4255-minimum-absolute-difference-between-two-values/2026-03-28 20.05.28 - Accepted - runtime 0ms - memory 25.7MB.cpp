class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int i,j;
        int mini=INT_MAX;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]==1&&nums[j]==2){
                    int d = abs(j-i);
                    mini=min(d,mini);
                }
                if(nums[i]==2&&nums[j]==1){
                    int d = abs(j-i);
                    mini=min(d,mini);
                }
            }
        }
        if(mini==INT_MAX)return -1;
        return mini;
    }
};
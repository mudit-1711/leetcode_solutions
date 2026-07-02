class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i,j,maxi=0;
        for(i=0;i<nums.size();i++){
            if(nums[maxi]<nums[i]){
                maxi=i;
            }
        }
        return maxi;
    }
};
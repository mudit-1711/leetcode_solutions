class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,j,m,k;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(i>0){
                nums[i]=nums[i-1]+nums[i];
            }
        }
        return nums;
    }
};
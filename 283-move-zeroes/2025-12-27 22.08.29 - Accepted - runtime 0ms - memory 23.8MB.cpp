class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,n=nums.size();
        int j=0;
        for(i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
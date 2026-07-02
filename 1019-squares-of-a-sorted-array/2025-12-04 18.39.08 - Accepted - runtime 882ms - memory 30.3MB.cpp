class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i,j,m;
        for(i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums;
    }
};
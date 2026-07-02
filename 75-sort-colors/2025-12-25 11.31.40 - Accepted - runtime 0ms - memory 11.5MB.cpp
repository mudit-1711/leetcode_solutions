class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int i,j,k;
        int n =nums.size();
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
};
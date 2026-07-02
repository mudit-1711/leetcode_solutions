class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int i,j;
        int mini=0;
        for(i=0;i<nums.size();i++){
            if(nums[mini]>nums[i]){
             mini = i;
            }
        }
        return nums[mini];
    
    }
};
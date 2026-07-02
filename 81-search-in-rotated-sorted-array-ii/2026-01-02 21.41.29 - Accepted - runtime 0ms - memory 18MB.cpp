class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i,j;
        for(i=0;i<nums.size();i++){
            
                if(nums[i]==target){
                    return true;
                }
            }
        
        return false;
    }
};
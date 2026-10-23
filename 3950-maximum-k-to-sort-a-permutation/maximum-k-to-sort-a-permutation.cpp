class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int i,j=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i){
                j&=nums[i];
                if(j==0)return 0;
            }
            
        }
        return max(j,0);
    }
};
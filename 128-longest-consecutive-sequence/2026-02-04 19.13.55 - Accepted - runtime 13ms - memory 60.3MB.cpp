class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j;
        int length=1;
        int maxlength=1;
        if(nums.size()==0)return 0;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]-1){
                length++;
            }else if(nums[i]==nums[i+1]){
               continue ;
            }else{
length=1;
            }
            maxlength=max(maxlength,length);
        }
        return maxlength;
    }
};